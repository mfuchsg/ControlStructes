#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <curses.h>


using namespace std;

//#define WHILE
#define tab "\t"
#define Escape 27

int main()
{
    setlocale (LC_ALL, "");
//    int n;
//    int i = 0;
//    cout << "Введите количество итераций: "; cin >> n;
//    while(n >= i)
//    {
//    cout << i << "Hello World!\n";
//    i++;
//    }
#ifdef WHILE
    {
    while(n--)
    {
        cout << n << " Hello World!" << endl;
    }
    }
#endif
    
    char key;
    do
    {
        key = cin.get();
        cout << (int)key << tab << key << endl;
    } while (key != Escape);
}
