#include <iostream>
#include "array.h"

using namespace std;

int main()
{
    Array arr1(5);
//    arr1.setCount(5);

    Array arr2(arr1);

    arr1.printAddr();
    arr2.printAddr();

//    cout << "arr2.m_iCount = " << arr2.getCount() << endl;

    return 0;
}
