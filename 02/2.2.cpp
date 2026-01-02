
#include <iostream>
#include <Windows.h>

using namespace std;

struct Bank
{
    int number_cheque;
    string name;
    double balance;
};

void Change_balance(Bank& people)
{
    cout << endl << " Введите новый баланс: ";
        cin >> people.balance;
        cout << endl;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    Bank people;

    cout << " Введите номер счета: ";
    cin >> people.number_cheque;

    cout << " Введите имя владелца: ";
    cin >> people.name; 
    
    cout << " Введите баланс: ";
    cin >> people.balance; 

    Change_balance(people);

    cout << endl << " Ваш счет: " << people.number_cheque << ",  " << people.name << ", " << people.balance << endl;

    
}

