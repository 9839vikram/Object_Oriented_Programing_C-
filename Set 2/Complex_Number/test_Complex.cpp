#include "Complex_Number.h"
#include <gtest/gtest.h>

TEST(Complex,DefaultConstructor) {
    Complex A1;
    ASSERT_EQ(0,A1.get_Real());
    ASSERT_EQ(0,A1.get_Img());
}

TEST(Complex,ParamConstructor) {
    Complex A2(5);
    ASSERT_EQ(5,A2.get_Real());
    ASSERT_EQ(5,A2.get_Img());
}
TEST(Complex,ParamAllConstructor) {
    Complex A3(4,5);
    ASSERT_EQ(4,A3.get_Real());
    ASSERT_EQ(5,A3.get_Img());
}
TEST(Complex,CopyConstructor) {
    Complex A4(8,9);
    ASSERT_EQ(8,A4.get_Real());
    ASSERT_EQ(9,A4.get_Img());
    Complex A5(A4);
    ASSERT_EQ(8,A5.get_Real());
    ASSERT_EQ(9,A5.get_Img());
}

TEST(Complex,Operator_plus) {
    Complex A6(5);
    Complex A7(4);
    Complex A8 = A6+A7;
    ASSERT_EQ(9,A8.get_Real());
    ASSERT_EQ(9,A8.get_Img());
}
TEST(Complex,Operator_minus) {
    Complex A6(5);
    Complex A7(4);
    Complex A8 = A6-A7;
    ASSERT_EQ(1,A8.get_Real());
    ASSERT_EQ(1,A8.get_Img());
}
TEST(Complex,Operator_mul) {
    Complex A6(5);
    Complex A7(4);
    Complex A8 = A6*A7;
    ASSERT_EQ(0,A8.get_Real());
    ASSERT_EQ(40,A8.get_Img());
}
TEST(Complex,Operator_pre_inc) {
    Complex A6(5);
    Complex A7 = ++A6;
    ASSERT_EQ(6,A7.get_Real());
    ASSERT_EQ(6,A7.get_Img());
}
TEST(Complex,Operator_post_inc) {
    Complex A6(5);
    Complex A7 = A6++;
    ASSERT_EQ(5,A7.get_Real());
    ASSERT_EQ(5,A7.get_Img());
}
TEST(Complex,Operator_equality) {
    Complex A6(5);
    Complex A7(5);
    ASSERT_EQ(true,A7==A6);
}


int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}