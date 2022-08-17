#include <iostream>

#include <stdlib.h>
#include <stdio.h>
#include <curses.h>
#include <locale.h>
#include <unistd.h>//
#include <term.h>//
#include <curses.h>//
#include <ncurses.h>//

using namespace std;

//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define POWER_1
#define tab "\t"

int main()
{
    setlocale (LC_ALL, "Russian");
#ifdef TASK_1
    {
        int n;
        int factorial;
        cout << "Введите число, у которого нужно найти факториал: "; cin >> n;
        for(int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        cout << "Факториал числа " << n << " = " << factorial << endl;
    }
#endif
    
#ifdef TASK_2
    {
        double N = 1;
        double number;
        int degree;
        cout << "Введите число, которое нужно возвестив степень: "; cin >> number;
        cout << "Введите степень числа: "; cin >> degree;
#ifdef POWER_1
        {
        if (degree < 0)
        {
            number = 1 / number;
            degree = -degree;
            
        }
        for(int i = 0; i < degree; i++)
        {
            N *= number;
        }
        cout << "Число возведенное в степень: " << N << endl;
        }
#endif
        for(int i = 0; i < degree; i++)
        {
            N *= number;
        }
        cout << "Число возведенное в степень: " << N << endl;
    }
#endif
    
#ifdef TASK_3
    {
        for (int i = 0; i < 256; i++)
        {
            
            if(i % 16 == 0)
            {cout << "\n";}
        cout << (char)i << tab;
            
        }
    }
#endif
//    for (int i = 0; i < 10; i++)
//    {
//        for(int j = 0; j < 10; j++)
//        {
//            cout << i << tab << j << endl;
//        }
//    }
    
    for(int h=0; h<24; h++)
    {
        for(int m=0; m<60; m++)
        {
            for(int s = 0; s<60; s++)
                
            {
                cout << h << ":" << m << ":" << s << "\r";
                usleep(100000);
            }
        }
    }
}
