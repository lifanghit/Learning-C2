#include <iostream>

using namespace std;

class Coordinate
{
public:
    int x;
    int y;
    void printX()
    {
        cout << x << endl;
    }
    void printY()
    {
        cout << y << endl;
    }
};

int main()
{
    //从栈中实例化对象
    Coordinate coor;
    coor.x = 10;
    coor.y = 20;
    coor.printX();
    coor.printY();

    //从堆中实例化对象
    Coordinate *p = new Coordinate();
    if(NULL == p)
    {
        //failed
        return 0;
    }
    p->x = 100;
    p->y = 200;
    p->printX();
    p->printY();

    delete p;
    p = NULL;

    cout << "Hello World!" << endl;
    return 0;
}
