#ifndef SOLDIER_H
#define SOLDIER_H

#include "person.h"

class Soldier:public Person
{
public:
    Soldier();
    void work();
protected:
    int m_iAge;
};

#endif // SOLDIER_H
