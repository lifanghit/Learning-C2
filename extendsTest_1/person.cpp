#include <iostream>
#include "person.h"

using namespace std;

Person::Person()
{
    m_strName = "Merry";
    cout << "Person()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}

void Person::eat()
{
    m_strName = "Jim";
    m_iAge = 20;
    cout << "eat()" << endl;
}

void Person::play()
{
    cout << "Person -- play()" << endl;
    cout << m_strName << endl;
}
