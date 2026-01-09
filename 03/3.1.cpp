
#include <iostream>
#include <Windows.h>

using namespace std;

class Calculator
{
private:
    double num1 = 0.0, num2 = 0.0;
    bool k = true;

    double add()
    {

        return num1 + num2;
    }

    double subtract_1_2()
    {
        return num1 - num2;
    }

    double subtract_2_1()
    {
        return num2 - num1;
    }

    double multiply()
    {
        return num1 * num2;
    }

    double divide_1_2()
    {
        return num1 / num2;
    }

    double divide_2_1()
    {
        return num2 / num1;
    }



public:

    bool set_num1(double num1)
    {

        cout << " Введите первое число: ";
        cin >> this->num1; cout << endl;

        if (this->num1 != 0)
        {
            return true;
        }
        else
        {
            cout << " Неверное введение " << endl;
            set_num1(num1);
            return false;
        }
    }

    //bool set_num1()
    //{
    //    if(k == false)  
    //    {
    //        cout << " Неверное введение " << endl;
    //        
    //    }
    //    k = false;

    //    cout << " Введите первое число: ";
    //    cin >> this->num1; cout << endl;
    //    return this->num1 != 0 ? true : set_num1(), k = true;
    //}

    bool set_num2(double num2)
    {
        if (k == false)
        {
            cout << " Неверное введение " << endl;

        }
        k = false;

        cout << " Введите второе число: ";
        cin >> this->num2; cout << endl;
        return this->num2 != 0 ? true : set_num2(num2), k = true;
    }


    // Какой из вариантов set_num лучше?




    void get_print_add()
    {
        cout << " num1 + num2 = " << add() << endl;
    }
    void get_print_subtract_1_2()
    {
        cout << " num1 - num2 = " << subtract_1_2() << endl;
    }
    void get_print_subtract_2_1()
    {
        cout << " num2 - num1 = " << subtract_2_1() << endl;
    }
    void get_print_multiply()
    {
        cout << " num1 * num2 = " << multiply() << endl;
    }
    void get_print_divide_1_2()
    {
        cout << " num1 / num2 = " << divide_1_2() << endl;
    }
    void get_print_divide_2_1()
    {
        cout << " num2 / num1 = " << divide_2_1() << endl;
    }

    void get_all_print()
    {
        set_num1(num1);
        set_num2(num2);

        get_print_add();
        get_print_subtract_1_2();
        get_print_subtract_2_1();
        get_print_multiply();
        get_print_divide_1_2();
        get_print_divide_2_1();

        cout << endl << "-------------------------------------------------" << endl << endl;

        get_all_print();
    }


  /*  void get_all_print_calc()
    {

        get_print_add();
        get_print_subtract_1_2();
        get_print_subtract_2_1();
        get_print_multiply();
        get_print_divide_1_2();
        get_print_divide_2_1();

    }*/


};




int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Calculator num;

    num.get_all_print();
    cout << endl << endl;



    /*
    int variable = 0;
    do
     {


         cout << " Выбирите действие: " << endl;
         cout << " 1. num1 + num2" << endl;
         cout << " 2. num1 - num2 " << endl;
         cout << " 3. num2 - num1 " << endl;
         cout << " 4. num1 * num2 " << endl;
         cout << " 5. num1 / num2 " << endl;
         cout << " 6. num2 / num1 " << endl;
         cout << " 7. Вывести все " << endl;
         cout << " 8. ВЫХОД! " << endl << endl;

         cout << " Ваш вариант: ";
         cin >> variable; cout << endl;

         num.set_num1();
         num.set_num2();

     switch (variable)
     {
     case(1):
         num.get_print_add();
         break;

     case(2):
         num.get_print_subtract_1_2();
         break;

     case(3):
         num.get_print_subtract_2_1();
         break;

     case(4):
         num.get_print_multiply();
         break;

     case(5):
         num.get_print_divide_1_2();
         break;

     case(6):
         num.get_print_divide_2_1();
         break;

     case(7):
         num.get_all_print_calc();
         break;

     case(8):
         cout << " Вы произвели выход! " << endl;
         break;
     }

     cout << endl << "-------------------------------------------------" << endl << endl;

     } while (variable != 8);
     */

}

