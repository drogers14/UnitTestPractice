/**
 * Unit Tests for Practice class
 **/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
  protected:
    PracticeTest(){} //constructor runs before each test
    virtual ~PracticeTest(){} //destructor cleans up after tests
    virtual void SetUp(){} //sets up before each test (after constructor)
    virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
  Practice obj;
  bool actual = obj.isPalindrome("aa");
  ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome)
{
  Practice obj;
  bool actual = obj.isPalindrome("Ba");
  ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_a_palindrome)
{
  Practice obj;
  bool actual = obj.isPalindrome("#$#");
  ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_ascending)
{
  Practice obj;
  int one = 4;
  int two = 2;
  int three = 3;

  obj.sortDescending(one,two,three );
  EXPECT_LT(two, one);
}
