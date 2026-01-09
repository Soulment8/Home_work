
#include <iostream>
#include <Windows.h>

using namespace std;

struct  Bank
{
    int number_cheque = 0;
    string name;
    double balance = 0;
};

void Change_balance(Bank& people, int bal)
{
    people.balance = bal;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int bal;
    Bank people;

    cout << " Введите номер счета: ";
    cin >> people.number_cheque;

    cout << " Введите имя владелца: ";
    cin >> people.name;

    cout << " Введите баланс: ";
    cin >> people.balance;

    cout << endl << " Введите новый баланс: ";
    cin >> bal;
    cout << endl;

    Change_balance(people, bal);

    cout << endl << " Ваш счет: "
        << people.number_cheque << ",  " << people.name << ", " << people.balance
        << endl;


}

