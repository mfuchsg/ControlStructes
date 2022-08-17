#include <iostream>

using namespace std;

int main ()
{
    setlocale (LC_ALL,"");
    int t;
    cout << "Введите температутур: "; cin >> t;
    if (t > 70)
    {
        cout << "Вы на другой планете" << endl;
    }
    else if (t > 50 || t == 70)
    {
        cout << "Вы на экваторе" << endl;
    }
    else if (t > 40 || t == 50)
    {
        cout << "Очень жарко" << endl;
    }
    else if (t > 25 || t == 40 )
    {
        cout << "Жарко" << endl;
    }
    else if (t > 15 || t == 25)
    {
        cout << "Тепло" << endl;
    }
    else if (t > 0 || t == 15)
    {
        cout << "Прохдадно" << endl;
    }
    else if (t >= -10 || t == 0)
    {
        cout << "Мороз" << endl;
    }
    
    else  
    {
        cout << "Cильынй мороз" << endl;
    }
}
