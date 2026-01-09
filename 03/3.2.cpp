
#include <iostream>
#include <Windows.h>
#include <limits>
using namespace std;

class Counter
{
private:

    int counter = 0;

    void counter_plus()
    {
        counter++;
    }
    void counter_minus()
    {
        counter--;
    }
    void get_counter_print()
    {
        cout << " Сейчас ваше значение = " << counter << endl << endl;
    }

public:

    Counter()
    {

    }

    Counter(int& n)
    {
        counter = n;
    }

    Counter(string& check_cmd)
    {
        counter = 1;
    }

    void get_menegment_counter(string& check_cmd)
    {
        cout << " Введите команду ('+'/'-'/'=' или 'x'): ";
        cin >> check_cmd; cout << endl;

        if (check_cmd == "+")
        {
            counter_plus();
        }
        else if (check_cmd == "-")
        {
            counter_minus();
        }
        else if (check_cmd == "=")
        {
            get_counter_print();
        }
        else if (check_cmd == "x")
        {
            cout << " До свидания! " << endl;
            return;
        }
        else
        {
            cout << " Некорректное значение! " << endl;
        }

        get_menegment_counter(check_cmd);
    }

};

void check_n(int& n)
{
    cout << " Введите начальное занчение счетчика: ";
    cin >> n;

    while (cin.fail()) {
        cout << " Некорректное значение! " << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        cout << " Введите начальное занчение счетчика: ";
        cin >> n;
    }

    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string check_cmd;

    cout << " Вы хотите указать начальное значение счетчика? " << endl
        << " Введите ( yes /no /1(для создания со значением 1) ): "; cin >> check_cmd; cout << endl;
    if (check_cmd == "yes")
    {
        int n = 0;
        check_n(n);
        Counter count(n);
        count.get_menegment_counter(check_cmd);
    }
    else if (check_cmd == "no")
    {
        Counter count;
        count.get_menegment_counter(check_cmd);
    }
    else if (check_cmd == "1")
    {
        Counter count(check_cmd);
        count.get_menegment_counter(check_cmd);
    }
    else
    {
        cout << " Некорректное значение! " << endl << endl;
        main();
    }

}

