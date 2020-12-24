#include <iostream>

#include "solution.h"

using namespace std;

int main()
{
  Solution s;
  cout << "nextGreaterElement(123) = " << s.nextGreaterElement(123) << endl;
  cout << "nextGreaterElement(12) = " << s.nextGreaterElement(12) << endl;
  cout << "nextGreaterElement(211) = " << s.nextGreaterElement(211) << endl;
  cout << "nextGreaterElement(7435) = " << s.nextGreaterElement(7435) << endl;
  return 0;
}
