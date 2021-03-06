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

TEST(PracticeTest, a_palindrome_1)
{
  Practice obj;
  string y = "   ";
  bool actual = obj.isPalindrome(y);
  ASSERT_TRUE(actual);
}

TEST(PracticeTest, a_palindrome_2)
{
  Practice obj;
  string y = "\0";
  bool actual = obj.isPalindrome(y);
  ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_descending)
{
  Practice obj;
  int one = 4;
  int two = 2;
  int three = 3;

  obj.sortDescending(one,two,three );
  EXPECT_LT(two, one);
  EXPECT_LT(three, two);
  EXPECT_LT(three, one);
}

TEST(PracticeTest, is_ascending)
{
  Practice obj;
  int one = 3;
  int two = 2;
  int three = 3;

  obj.sortDescending(one,two,three );
  EXPECT_LT(three, one);
}

TEST(PracticeTest, is_ascending_fail)
{
  Practice obj;
  int one = 3;
  int two = 3;
  int three = 3;

  obj.sortDescending(one,two,three );
  EXPECT_GE(three, one);
}

TEST(PracticeTest, test1)
{
  Practice obj;
  int one = 2;
  int two = 1;
  int three = -2;

  obj.sortDescending(one,two,three );
  EXPECT_LE(three, one);
}

TEST(PracticeTest, test2)
{
  Practice obj;
  int one = 1;
  int two = 2;
  int three = 3;

  obj.sortDescending(one,two,three );
  EXPECT_LE(three, one);
}

TEST(PracticeTest, test3)
{
  Practice obj;
  int one = 3;
  int two = 1;
  int three = 2;

  obj.sortDescending(one,two,three );
  EXPECT_LE(three, one);
}

TEST(PracticeTest, test4)
{
  Practice obj;
  int one =2 ;
  int two = 2;
  int three = 3;

  obj.sortDescending(one,two,three );
  EXPECT_GE(three, one);
}

TEST(PracticeTest, test5)
{
  Practice obj;
  int one =-1;
  int two =2;
  int three =-2;

  obj.sortDescending(one,two,three );
  EXPECT_LE(three, one);
}
