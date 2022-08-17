#include<iostream>
using namespace std;

//#define Weather

int main()
{
    setlocale (LC_ALL, "");
#ifdef Weather
{
    int temperature;
    cout << "Введите температуру воздуха: "; cin >> temperature;
    if(temperature >= 0)
    {
        cout << "На улице тепло!" << endl;
    }
    else
    {
        cout << "На улице холодно!" << endl;
    }
}
#endif
    int n;
    cout << "введите число: "; cin >> n;
    if(n >= 0 && n <= 10)
    {
        cout << "Цель поражена" << endl;
    }
    else
    {
        cout << "Вы промахнулись" << endl;
    }
}
