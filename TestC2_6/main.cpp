#include <iostream>
#include <string>
#include "teacher.h"

using namespace std;

int main()
{
//    Teacher t1("Marry", 12, 150);
//    cout << t1.getName() << ", " << t1.getAge() << ", " << t1.getMax() << endl;

    Teacher t1;
    Teacher t2 = t1;
//    Teacher t3(t1);
    Teacher *p = new Teacher();
    delete p;

    system("pause");
    return 0;
}
