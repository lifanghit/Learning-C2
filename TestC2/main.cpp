#include <iostream>
#include "namespacetest.h"
using namespace std;

namespace CompanyA {
    int getMaxOrMin(int *arr, int len, bool isMax) {
        int temp = arr[0];
        for (int i = 1; i < len; i++) {
            if (isMax) {
                if (arr[i] > temp)
                    temp = arr[i];
            }
            else {
                if (arr[i] < temp)
                    temp = arr[i];
            }
        }
        return temp;
    }
}


//using namespace CompanyA;
int main()
{
//    cout << A::x << endl;
//    B::fun();
//    fun2();

    int arr[10] = {1,4,2,555,34,32,23,232,1,23};
    bool isMax = false;

    cin >> isMax;
    cout << CompanyA::getMaxOrMin(arr, 10, isMax) << endl;

//    cout << "请输入一个整数： " << endl;
//    int x = 0;
//    cin >> x;
//    cout << oct << x << endl; //八进制
//    cout << dec << x << endl; //十进制
//    cout << hex << x << endl; //十六进制

//    cout << "请输入一个布尔值（0、1）： " << endl;
//    bool y = false;
//    cin >> y;
//    cout << boolalpha << y <<endl;


    system("pause");
    return 0;
}
