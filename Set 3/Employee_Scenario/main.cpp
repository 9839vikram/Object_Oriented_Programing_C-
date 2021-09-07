#include <iostream>
#include"Employee.h"
#include"Engineer.h"
#include"Manager.h"
using namespace std;

int main()
{
    Engineer E1("LTTS_268474","Mr. Harry",53000.00,4500,248974);
    E1.appraisal(4500);
    E1.display();

    Manager M1("LTTS_268123", "Mr. Virat", 55000.00, 4000,248988,100);
    M1.appraisal(4500);
    M1.display();
    return 0;

}
