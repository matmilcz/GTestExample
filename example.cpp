#include <gtest/gtest.h>

TEST(Example, Test)
{
    EXPECT_EQ(true, true);
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}