#include<iostream>

using namespace std;

#define Enter 10
#define Escape 27
#define W 119
#define S 115
#define D 100
#define A 97
#define Space 32

int main()
{
    char key;
    do
    {
        key = cin.get();
        switch((int)key)
        {
            case Enter:cout << "Огонь" << endl; break;
            case W:cout << "Вперед" << endl;break;
            case S:cout << "Назад" << endl;break;
            case D:cout << "Вправо" << endl; break;
            case A:cout << "Влево" << endl; break;
            case Space: cout << "Прыжок" << endl; break;
        }
    }while (key != Escape);
}
