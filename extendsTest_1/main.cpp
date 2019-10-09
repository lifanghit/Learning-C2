#include <iostream>
#include "worker.h"
#include "person.h"
#include "soldier.h"
#include "infantry.h"

using namespace std;

int main()
{

//    Worker *p = new Worker();
////    p->m_strName = "Jim";
////    p->m_iAge = 10;
//    p->eat();
//    p->m_iSalary = 2000;
//    p->work();

//    delete p;
//    p = NULL;

    Soldier soldier;
    soldier.work();
    soldier.play();

    soldier.Person::play();

    return 0;
}
