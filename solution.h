#ifndef SOLUTION_H
#define SOLUTION_H

#include <cmath>
#include <string>
#include <stdexcept>

class Solution {
public:
  int nextGreaterElement(int n) {
    int result = -1;
    int first_digit = getDigit(0, n);
    for (int i = 1; int next_digit = getDigit(i, n); ++i) {
      if (next_digit < first_digit) {
        result = swapDigits(0, i, n);
        break;
      }
    }

    return result;
  }

private:
  int getDigit(int pos, int number) {
    int digit = 0;
    if (0 <= pos) {
      int count = pos;
      digit = number;
      while (0 < count) {
        digit /= 10;
        --count;
      }
      digit = digit % 10;
    } else {
      using namespace std::literals;
      throw std::out_of_range("Digit position cannot be negative"s);
    }

    return digit;
  }

  int swapDigits(int pos1, int pos2, int number) {
    int result = number;
    if (0 <= pos1 && 0 <= pos2) {
      if (pos1 != pos2) {
        result = 0;
        int max_pos = std::max(pos1, pos2);
        int min_pos = std::min(pos1, pos2);
        for (int i = 0; int next_digit = getDigit(i, number); ++i) {
          int pos = (max_pos == i || min_pos == i)
              ? other(i, {min_pos, max_pos})
              : i;
          result += std::pow(10, i) * getDigit(pos, number);
        }
      }
    } else {
      using namespace std::literals;
      throw std::out_of_range("Digit position cannot be negative"s);
    }

    return result;
  }

  template <typename Type>
  Type other(const Type & value, const std::pair<Type, Type>& variants) {
    return (value == variants.first)
        ? variants.second
        : variants.first;
  }
};

#endif // SOLUTION_H
