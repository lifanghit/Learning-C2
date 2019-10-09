#ifndef WORKER_H
#define WORKER_H

#include "person.h"

class Worker:public Person
{
public:
    Worker();
    ~Worker();
    void work();

public:
    int m_iSalary;
};

#endif // WORKER_H
