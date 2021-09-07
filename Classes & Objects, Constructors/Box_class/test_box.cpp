#include"Box_Class.h"
#include<gtest/gtest.h>

TEST(Box,EmptyConstructor)
{
	Box B1;
	ASSERT_EQ(0,B1.length());
	ASSERT_EQ(0,B1.breadth());
	ASSERT_EQ(0,B1.height());
	ASSERT_EQ(0,B1.volume());
}

TEST(Box,ParamConstructor)
{
	Box B2(10);
	ASSERT_EQ(10,B2.length());
	ASSERT_EQ(10,B2.breadth());
	ASSERT_EQ(10,B2.height());
	ASSERT_EQ(1000,B2.volume());

}
TEST(Box,ParamAllConstructor)
{
	Box B2(10,20,30);
	ASSERT_EQ(10,B2.length());
	ASSERT_EQ(20,B2.breadth());
	ASSERT_EQ(30,B2.height());
	ASSERT_EQ(6000,B2.volume());
}
TEST(Box,CopyConstructor)
{
	Box B1(10,20,30);
	Box B2(B1);
	ASSERT_EQ(10,B1.length());
	ASSERT_EQ(20,B1.breadth());
	ASSERT_EQ(30,B1.height());
	ASSERT_EQ(6000,B1.volume());

	ASSERT_EQ(10,B2.length());
	ASSERT_EQ(20,B2.breadth());
	ASSERT_EQ(30,B2.height());
	ASSERT_EQ(6000,B2.volume());
}

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}