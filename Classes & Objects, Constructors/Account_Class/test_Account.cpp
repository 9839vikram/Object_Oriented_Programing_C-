include"Account_Class.h"
#include<gtest/gtest.h>



TEST(Account,EmptyConstructor) {
    
    Account a1();
   
    ASSERT_EQ(0.0 , a1.getBalance());

}

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}