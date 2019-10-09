#include <iostream>

using namespace std;

inline void fun(int i = 30, int j = 20, int k = 10);
inline void fun(double i, double j);

int main()
{
    int *p = new int[1000];
    if(NULL == p){
        system("pause");
        return 0;
    }
    p[0] = 10;
    p[1] = 20;
    cout << p[0] << ", " << p[1] << endl;
    delete p;
    p = NULL;

    fun(1.1, 2.2);
    fun(1, 2);
    fun(100, 200);
    fun(100, 200, 300);
    return 0;
}

void fun(int i, int j, int k){
    cout << i << ", " << j << ", " << k << endl;
}

void fun(double i, double j){
    cout << i << ", " << j << endl;
}
