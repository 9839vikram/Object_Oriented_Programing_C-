#include <iostream>
#include"Box_Class.h"

using namespace std;

int main()
{
    Box B1;
	B1.display();

	Box B2(20,10,5);
	B2.display();

	Box B3(30);
	B3.display();

	Box B4(B3);
	B4.display();

    return 0;
}
