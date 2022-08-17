#include<iostream>

using namespace std;

//#define Task1
#define Task2
#define tab "\t"

int main()
{
    
#ifdef Task1
    {
        for(int i = 1; i<=10; i++)
        {
            for(int j=0;j<=10;j++)
            {
                if (i < 10)cout << " ";
                if (i*j)cout
                    cout << i << " * " << j << " = " << i*j << endl;
            }
            cout << endl;
        }
    }
#endif
    
#ifdef Task2
    {
        cout << tab;
        for(int i = 1; 10 >= i; i++)
        {
            cout << i << tab;
        }
        cout << endl;
        for (int i = 1; 10 >= i; i++)
        {
            cout << i << tab;
            for (int j = 1; 10 >= j; j++)
            {
                
                cout << i * j << tab;
            }
            cout << endl;
        }
        
        
        
    }
#endif
}
