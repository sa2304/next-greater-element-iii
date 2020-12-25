#ifndef SOLUTION_H
#define SOLUTION_H

#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
#include <stdexcept>

class Solution {
public:
  int nextGreaterElement(int n) {
    int result = -1;

    std::string str_number;
    {
      std::stringstream ss;
      ss << n;
      ss >> str_number;
    }

    if (std::next_permutation(str_number.begin(), str_number.end())) {
      std::stringstream ss;
      ss << str_number;
      ss >> result;
      if (!ss) {
        result = -1;
      }
    }

    return result;
  }
};

#endif // SOLUTION_H
