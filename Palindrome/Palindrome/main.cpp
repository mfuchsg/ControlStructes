#include<iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "");
    unsigned long long int number;              //число вводимое с клавиатура
    cout << "Введите число: "; cin >> number;
    unsigned long long int buffer = number;     //Копия введенного числа
    unsigned long long int mirror_number = 0;   //Число записанное наоборот
    while (buffer)
    {
//        mirror_number *= 10;
//        mirror_number += buffer % 10;  //Cохраняем младший разряд искодного числа
        mirror_number = mirror_number * 10 + buffer % 10; //Две строки объединили в одну
        buffer /= 10; //Убираем сохранненый ранее разряд
        
    
    }
    cout << number << endl;
    cout << mirror_number << endl;
    if (number == mirror_number)
    {
        cout << "Число является палиндромом" << endl;
    }
    else
    {
        cout << "Число НЕ является палиндромом" << endl;
    }
}
