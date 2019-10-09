#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    void setName(string _name)
    {
        m_strName = _name;
    }

    string getName()
    {
        return m_strName;
    }

    string getGender(){
        return m_strGender;
    }

    void setStrGender(string _gender)
    {
        m_strGender = _gender;
    }

    int getScore()
    {
        return m_iScore;
    }

    void initScore()
    {
        m_iScore = 0;
    }

    void study(int _score){
        m_iScore += _score;
    }

private:
    string m_strName;
    string m_strGender;
    int m_iScore;
};

int main()
{
    Student stu;
    stu.initScore();
    stu.setName("zhangsan");
    stu.setStrGender("Female");
    stu.study(5);
    stu.study(3);

    cout << stu.getName() << " " << stu.getScore()<< endl;
    return 0;
}
