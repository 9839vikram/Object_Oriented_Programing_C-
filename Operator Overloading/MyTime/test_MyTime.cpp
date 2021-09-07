#include "MyTime.h"
#include <gtest/gtest.h>


TEST(Mytime,DefaultConstructor) {
    MyTime T1;
    ASSERT_EQ(0,T1.get_Hours());
    ASSERT_EQ(0,T1.get_Minutes());
    ASSERT_EQ(0,T1.get_Seconds());
}
TEST(Mytime,ParamAllConstructor) {
    MyTime T1(5,70,80);
    ASSERT_EQ(6,T1.get_Hours());
    ASSERT_EQ(11,T1.get_Minutes());
    ASSERT_EQ(20,T1.get_Seconds());
}
TEST(Mytime,ParamConstructor) {
    MyTime T1(5,70);
    ASSERT_EQ(6,T1.get_Hours());
    ASSERT_EQ(10,T1.get_Minutes());
    ASSERT_EQ(00,T1.get_Seconds());
}
TEST(Mytime,Operator_plus) {
    MyTime T1(7,50,40);
    MyTime T2(4,20,30);
    MyTime T3 = T1 + T2;
    ASSERT_EQ(12,T3.get_Hours());
    ASSERT_EQ(11,T3.get_Minutes());
    ASSERT_EQ(20,T3.get_Seconds());
}
TEST(Mytime,Operator_Sub) {
    MyTime T1(7,50,40);
    MyTime T2(4,20,30);
    MyTime T3 = T1 - T2;
    ASSERT_EQ(3,T3.get_Hours());
    ASSERT_EQ(30,T3.get_Minutes());
    ASSERT_EQ(10,T3.get_Seconds());
}
TEST(Mytime,Operator_post_inc) {
    MyTime T2(4,20,30);
    MyTime T3 = T2++;
    ASSERT_EQ(4,T3.get_Hours());
    ASSERT_EQ(20,T3.get_Minutes());
    ASSERT_EQ(30,T3.get_Seconds());
}
TEST(Mytime,Operator_pre_inc) {
    MyTime T2(4,20,30);
    MyTime T3 = ++T2;
    ASSERT_EQ(5,T3.get_Hours());
    ASSERT_EQ(21,T3.get_Minutes());
    ASSERT_EQ(31,T3.get_Seconds());
}
TEST(Mytime,Operator_plus_equ) {
    MyTime T2(4,20,30);
    MyTime T3(1,10,20);
    T3 += T2;
    ASSERT_EQ(5,T3.get_Hours());
    ASSERT_EQ(21,T3.get_Minutes());
    ASSERT_EQ(31,T3.get_Seconds());
}

 int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}