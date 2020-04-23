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
    int arr[3] = {2, 3, 4};
    int actual[3] = obj.sortDescending(arr);
    int check[3] = {4, 3, 2};
    EXPECT_EQ(check, actual);
}
