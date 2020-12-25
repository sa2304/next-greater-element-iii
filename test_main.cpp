#include <gtest/gtest.h>

#include "solution.h"

//------------------------------------------------------------------------------
class TestClass : public ::testing::Test {
protected:
  void SetUp()
  { }
};

//cout << "nextGreaterElement(123) = " << s.nextGreaterElement(123) << endl;
//cout << "nextGreaterElement(12) = " << s.nextGreaterElement(12) << endl;
//cout << "nextGreaterElement(211) = " << s.nextGreaterElement(211) << endl;
//cout << "nextGreaterElement(7435) = " << s.nextGreaterElement(7435) << endl;
//cout << "nextGreaterElement(101) = " << s.nextGreaterElement(101) << endl;
//cout << "nextGreaterElement(230241) = " << s.nextGreaterElement(230241) << endl;

//------------------------------------------------------------------------------
TEST_F(TestClass, testExample) {
  Solution s;
  ASSERT_EQ(132, s.nextGreaterElement(123));
  ASSERT_EQ(21, s.nextGreaterElement(12));
  ASSERT_EQ(-1, s.nextGreaterElement(211));
  ASSERT_EQ(7453, s.nextGreaterElement(7435));
  ASSERT_EQ(110, s.nextGreaterElement(101));
  ASSERT_EQ(230214, s.nextGreaterElement(230241));

}

//------------------------------------------------------------------------------
