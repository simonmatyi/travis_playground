#include "gtest/gtest.h"

#include "example.h"

TEST(Dummy, foobar)
{
    EXPECT_EQ(1, 1);
}

TEST(SumTest, testSumFunction)
{
	int a = example::sum(1, 3);
	EXPECT_EQ(4, a);
}

TEST(SumTest, testwerewrwe)
{
	int a = example::sum(1, 5);
	EXPECT_EQ(6, a);
}

TEST(SumTest, negativeValues)
{
	int a = example::sum(-10, -5);
	EXPECT_EQ(-15, a);
}

TEST(SumTest, mixedSignValues)
{
	int a = example::sum(77, -44);
	EXPECT_EQ(33, a);
}

TEST(SumTest, nestedSum)
{
	int a = example::sum(1, example::sum(2, 4));
	EXPECT_EQ(7, a);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

