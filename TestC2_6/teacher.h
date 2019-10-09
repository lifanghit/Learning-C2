#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <string>

using namespace std;

class Teacher
{
public:
//    Teacher(string name = "Jim", int age = 1, int m = 100);
    Teacher(string name = "Jim", int age = 1);
    Teacher(const Teacher &teacher);  //拷贝构造函数
    ~Teacher();

    string getName();
    void setName(string _name);

    int getAge();
    void setAge(int _age);

//    int getMax();

private:
    string m_strName;
    int m_iAge;
//    const int m_iMax;
};


#endif // TEACHER_H

