#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    Person();
    ~Person();
    void eat();
    void play();
protected:
    string m_strName;
    int m_iAge;
};

#endif // PERSON_H
