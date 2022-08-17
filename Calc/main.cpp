#include<iostream>

using namespace std;

//#define IFELSE

int main()
{
    setlocale(LC_ALL, "");
    double a,b;
    char s;
    cout << "Введите арифмитическое выражение: ";
    cin >> a >> s >> b;
    //cout << a << s << b << endl;
#ifdef IFELSE
{
    if(s == '+')
    {
        cout << a << "+" << b << "=" << a + b << endl;
    }
    else if(s=='-')
    {
        cout << a << "-" << b << "=" << a - b << endl;
    }
    else if(s == '*')
    {
        cout << a << "*" << b << "=" << a * b << endl;
    }
    else if(s == '/')
    {
        cout << a << "/" << b << "=" << a / b << endl;
    }
    else
    {
        cout << "Error: NoOperation" << endl;
    }
}
#endif
   switch(s)
   {
       case '+':cout << a << "+" << b << "=" << a + b << endl; break;
       case'-':cout << a << "-" << b << "=" << a - b << endl; break;
       case'*':cout << a << "*" << b << "=" << a * b << endl; break;
       case'/':cout << a << "/" << b << "=" << a / b << endl; break;
       default:cout << "Error: NoOperation" << endl;
           
   }
    main();
}
