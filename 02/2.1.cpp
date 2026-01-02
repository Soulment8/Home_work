
#include <iostream>
#include <Windows.h>

using namespace std;

enum Months
{
    Exit      ,
    Январь    ,
    Февраль   ,
    Март      ,
    Апрель    ,
    Май       ,
    Июнь      ,
    Июль      ,
    Август    ,
    Сентябрь  ,
    Октябрь   ,
    Ноябрь    ,
    Декабрь   
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
            case Months::Январь:
            cout << " Январь " << endl;
            break;

            case Months::Февраль:
            cout << " Февраль " << endl;
            break;

        case Months::Март:
            cout << " Март " << endl;
            break;

        case Months::Апрель:
            cout << " Апрель " << endl;
            break;

        case Months::Май:
            cout << " Май " << endl;
            break;

        case Months::Июнь:
            cout << " Июнь " << endl;
            break;

        case Months::Июль:
            cout << " Июль " << endl;
            break;

        case Months::Август:
            cout << " Август " << endl;
            break;

        case Months::Сентябрь:
            cout << " Сентябрь " << endl;
            break;

        case Months::Октябрь:
            cout << " Октябрь " << endl;
            break;

        case Months::Ноябрь:
            cout << " Ноябрь " << endl;
            break;

        case Months::Декабрь:
            cout << " Декабрь " << endl;
            break;

        case Months::Exit:
            cout << " До свидания " << endl;
            break;

        default:
            cout << " Неправильный номер! " << endl;
            break;
        }
        cout << endl;
    } while (Number != 0);
}

