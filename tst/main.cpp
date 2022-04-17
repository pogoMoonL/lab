#include <gtest/gtest.h>
#include <string>
using std::string;

int myadd(int a, int b)
{
    return a + b;
}

const char *actualValTrue  = "hello world";
const char *actualValFalse = "hello world";
const char *expectVal      = "hello world";

TEST(StrCompare, CStrEqual) {
    EXPECT_STREQ(expectVal, actualValTrue);
}

TEST(StrCompare, CStrNotEqual) {
    EXPECT_STREQ(expectVal, actualValFalse);
}

TEST(calculate, nick)
{
    EXPECT_EQ(myadd(2, 3), 5);
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}