#include <iostream>

using namespace std;

void fun(int &a, int &b);

typedef struct
{
    int x;
    int y;
}Coor;

int main()
{
    //基本数据类型的引用
    int a = 10;
    int &b = a;

    b = 20;
    cout << a << endl;

    a= 30;
    cout << b << endl;

    //结构体类型的引用
    Coor c;
    Coor &c1 = c;

    c1.x = 20;
    c1.y = 21;
    cout << c1.x << ", " << c1.y << endl;

    //指针类型的引用
    int point = 3;
    int *p = &point;
    int *&q = p;

    *q = 6;
    cout << point << endl;

    //引用做函数参数
    int x = 12;
    int y = 21;
    cout << x << ", " << y << endl;

    fun(x, y);
    cout << x << ", " << y << endl;

    system("pause");
    return 0;
}

void fun(int &a, int &b){
    int c = 0;
    c = a;
    a = b;
    b = c;
}
