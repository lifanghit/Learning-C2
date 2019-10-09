#ifndef NAMESPACETEST_H
#define NAMESPACETEST_H

#include <iostream>

using namespace std;

namespace A {
    int x = 1;
    void fun(){
        cout << 'A' << endl;
    }
}

namespace B {
    int x = 2;
    void fun(){
        cout << 'B' << endl;
    }
    void fun2(){
        cout << "2B" << endl;
    }
}

#endif // NAMESPACETEST_H
