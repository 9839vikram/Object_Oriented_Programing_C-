#include<gtest/gtest.h>
#include"Account.cpp"
#include"CreditAccount.h"
#include"SavingsAccount.h"
using namespace std;
TEST(CreditAccount,DefaultConstructor){
    CreditAccount C1;
    ASSERT_EQ(0.0,C1.getBalance());
    ASSERT_EQ(1000,C1.debit(1000));
    EXPECT_EQ(2000,ca1.credit(2000));
}

TEST(CreditAccount,paramAllConstructor){
    CreditAccount C1("12345","Harry",5000);
    ASSERT_EQ(5000,C1.getBalance());
    ASSERT_EQ(4000,C1.debit(1000));
    EXPECT_EQ(7000,ca1.credit(2000));
}
TEST(CreditAccount,paramConstructor){
    CreditAccount C1("12345","Harry");
    ASSERT_EQ(0.0,C1.getBalance());
    ASSERT_EQ(1000,C1.debit(1000));
    EXPECT_EQ(2000,ca1.credit(2000));
}

TEST(SavingsAccount,SDefaultConstructor){
    SavingsAccount C1;
    ASSERT_EQ(0.0,C1.getBalance());
    ASSERT_EQ(1000,C1.debit(1000));
    EXPECT_EQ(2000,ca1.credit(2000));
}

TEST(SavingsAccount,SparamAllConstructor){
    SavingsAccount C1("12345","Harry",5000);
    ASSERT_EQ(5000,C1.getBalance());
    ASSERT_EQ(4000,C1.debit(1000));
    EXPECT_EQ(7000,ca1.credit(2000));
}
TEST(SavingsAccount,SparamConstructor){
    SavingsAccount C1("12345","Harry");
    ASSERT_EQ(0.0,C1.getBalance());
    ASSERT_EQ(1000,C1.debit(1000));
    EXPECT_EQ(2000,ca1.credit(2000));
}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }