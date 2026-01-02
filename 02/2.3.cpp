
#include <iostream>
#include <Windows.h>

using namespace std;

struct Address
{
    string city;
    string street;
    int nomber_h;
    int nomber_a;
    int index;
};

void Print_Address(Address& a_x)
{
    cout << " Город: " << a_x.city << endl;
    cout << " Улица: " << a_x.street << endl;
    cout << " Номер дома: " << a_x.nomber_h << endl;
    cout << " Номер квартиры: " << a_x.nomber_a << endl;
    cout << " Индекс: " << a_x.index << endl << endl;

}

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    Address a_0;
    Address a_1;

    a_0.city = "Москва";
    a_0.street = "Арбат";
    a_0.nomber_h = 12;
    a_0.nomber_a = 8;
    a_0.index = 123456;

    a_1.city = "Ижевск";
    a_1.street = "Пушкина";
    a_1.nomber_h = 59;
    a_1.nomber_a = 143;
    a_1.index = 953769;

    Print_Address(a_0);
    Print_Address(a_1);

}

