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
  cout << "nextGreaterElement(101) = " << s.nextGreaterElement(101) << endl;
  cout << "nextGreaterElement(230241) = " << s.nextGreaterElement(230241) << endl;
  cout << "s.nextGreaterElement(1999999999) = " << s.nextGreaterElement(1999999999) << endl;

  return 0;
}
