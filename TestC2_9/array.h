#ifndef ARRAY_H
#define ARRAY_H

class Array
{
public:
    Array(int len);
    ~Array();
    Array* setLen(int len);
    int getLen();
    Array* printInfo();
private:
    int len;
};

#endif // ARRAY_H
