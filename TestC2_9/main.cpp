#include <iostream>
#include "array.h"

using namespace std;

int main()
{
    Array arr1(10);
//    arr1.printInfo()->setLen(5)->printInfo();

    arr1.printInfo();
    cout << "arr1 address " << &arr1 << endl;
    return 0;
}
