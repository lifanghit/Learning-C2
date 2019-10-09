#include "teacher.h"

//Teacher::Teacher(string name, int age, int m):m_strName(name),m_iAge(age), m_iMax(m)
//{
//    cout << "Teacher(string name, int age)" << endl;
//}

Teacher::Teacher(string name, int age):m_strName(name),m_iAge(age)
{
    cout << "Teacher(string name, int age)" << endl;
}

Teacher::Teacher(const Teacher &teacher)
{
    cout << "Teacher(const Teacher &teacher)" << endl;
}

Teacher::~Teacher()
{
    cout << "~Teacher()" << endl;
}

//int Teacher::getMax()
//{
//    return m_iMax;
//}

string Teacher::getName()
{
    return m_strName;
}

void Teacher::setName(string _name)
{
    m_strName = _name;
}

int Teacher::getAge()
{
    return m_iAge;
}

void Teacher::setAge(int _age)
{
    m_iAge = _age;
}
