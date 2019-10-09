#include <iostream>
#include "array.h"

using namespace std;

Array::Array(int len)
{
    this->len = len;
}

Array::~Array()
{

}

int Array::getLen()
{
    return this->len;
}

Array* Array::setLen(int len)
{
    this->len = len;
    return this;
}

Array* Array::printInfo()
{
    cout << "len = " << this->len << endl;
    cout << "this address is " << this << endl;
    return this;
}
