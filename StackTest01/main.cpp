#include <iostream>
#include "mystack.h"
#include "coordinate.h"

using namespace std;

#define BINARY 2
#define OCTONARY 8
#define HEXADECIMAL 16

int main()
{
    char num[] = "0123456789ABCDEF";

    MyStack<int> *pStack = new MyStack<int>(10);

    int N = 1348;
    int mod = 0;

    while (N != 0) {
        mod = N % HEXADECIMAL;
        pStack->push(mod);
        N = N / HEXADECIMAL;
    }

//    pStack->stackTraverse(false);
    int elem = 0;
    while (!pStack->stackEmpty()) {
        pStack->pop(elem);
        cout << num[elem];

    }

    cout << endl;

//    pStack->push(Coordinate(1,2)); //Bottom
//    pStack->push(Coordinate(3,4)); //Top

//    pStack->stackTraverse(true);

//    char elem = 0;
// //   pStack->pop(elem);
//    cout << endl;
//    cout << elem << endl;

//   // pStack->clearStack();

//    cout << pStack->stackLength() << endl;

//    if(pStack->stackEmpty())
//    {
//        cout << "stack is empty" << endl;
//    }

//    if (pStack->stackFull())
//    {
//        cout << "stack is full" << endl;
//    }

    delete pStack;
    pStack = NULL;

    return 0;
}
