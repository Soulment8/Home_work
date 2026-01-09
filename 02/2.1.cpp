
#include <iostream>
#include <Windows.h>

using namespace std;

enum class Months : int
{
    Exit,
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int Number = 0;

    do
    {
        cout << " Введиете номер месяца: ";
        cin >> Number;
        cout << endl;

        switch (Number)
        {
        case static_cast<int>(Months::January):
            cout << " Январь " << endl;
            break;

        case static_cast<int>(Months::February):
            cout << " Февраль " << endl;
            break;

        case static_cast<int>(Months::March):
            cout << " Март " << endl;
            break;

        case static_cast<int>(Months::April):
            cout << " Апрель " << endl;
            break;

        case static_cast<int>(Months::May):
            cout << " Май " << endl;
            break;

        case static_cast<int>(Months::June):
            cout << " Июнь " << endl;
            break;

        case static_cast<int>(Months::July):
            cout << " Июль " << endl;
            break;

        case static_cast<int>(Months::August):
            cout << " Август " << endl;
            break;

        case static_cast<int>(Months::September):
            cout << " Сентябрь " << endl;
            break;

        case static_cast<int>(Months::October):
            cout << " Октябрь " << endl;
            break;

        case static_cast<int>(Months::November):
            cout << " Ноябрь " << endl;
            break;

        case static_cast<int>(Months::December):
            cout << " Декабрь " << endl;
            break;

        case static_cast<int>(Months::Exit):
            cout << " До свидания " << endl;
            break;

        default:
            cout << " Неправильный номер! " << endl;
            break;
        }
        cout << endl;
    } while (Number != 0);
}

