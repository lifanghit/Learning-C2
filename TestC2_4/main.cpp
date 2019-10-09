#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Please input your name: " << endl;
    getline(cin, name);
    if(name.empty()) {
        cout << "input is null.." << endl;
        system("pause");
        return 0;
    }
    if(name == "imooc"){
        cout << "you are an admin" << endl;
    }
    cout << "hello " + name << endl;
    cout << "your name length: " << name.size() << endl;
    cout << "your name first letter is : " << name[0] << endl;
    system("pause");
    return 0;
}
