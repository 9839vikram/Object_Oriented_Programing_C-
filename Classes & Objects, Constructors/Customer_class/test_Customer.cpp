#include "Customer_class.h"
#include<gtest/gtest.h>

TEST(Customer, DefaultConstructor) {
	Customer A1;
	ASSERT_EQ(0, A1.getBalance());
}

TEST(Customer, ParameterizedConstructor) {
	
	Customer A2("1234","XYZ","12345",5000.0);
	ASSERT_EQ(5000.0, A2.getBalance());

}
TEST(Customer, ParameterizedSConstructor) {
	Customer A3("1234","XYZ","12345");
	ASSERT_EQ(0.0, A3.getBalance());

}
TEST(Customer, CopyConstructor) {
	Customer A4("1234","XYZ","12345",5000.0);
	ASSERT_EQ(5000.0, A4.getBalance());
	Customer A5(A4);
	ASSERT_EQ(5000.0, A5.getBalance());

}
TEST(Customer, CreditTest) {
	Customer A6("1234","XYZ","12345",5000.0);
	
	A6.credit(3000);
	ASSERT_EQ(8000.0, A6.getBalance());

}
TEST(Customer, makecallTest) {
	Customer A7("1234","XYZ","12345",5000.0);
	A7.makeCall(4000);
	ASSERT_EQ(1000.0, A7.getBalance());
}

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}