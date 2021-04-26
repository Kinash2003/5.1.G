// 5.1.G.cpp 
#include <iostream>
#include <exception>
#include <stdexcept>
#include "Date.h"
#include <Windows.h> 

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try
    {

        Date A2(3, 3, 3);
        Date B2(3, 3, 3);
        Date C2(2010, 2, 22);
        Date D2(2010, 2, 22);
        int result;
        cout << " Date: " << endl;
        cout << " Comparison Triad: " << endl;
        result = A2.Сomparison(A2, B2);
        A2.TriadResult(result);
        cout << " Кількість елементів класу Triad: " << Object::Count() << endl;
        cout << " Comparison Date: " << endl;
        result = C2.Сomparison(C2, D2);
        C2.date1(result);
        cout << " Кількість елементів класу Date: " << Object::Count() << endl;
        cout << " A2++ " << endl; cout << A2++ << endl;
        cout << " A2-- " << endl; cout << A2-- << endl;
        cout << " ++A2 " << endl; cout << ++A2 << endl;
        cout << " --A2 " << endl; cout << --A2 << endl;
    }
    catch (invalid_argument e)
    {
        cout << e.what() << endl;
    }
    catch (bad_exception e)
    {
        cout << e.what() << endl;
    }
    catch (Bad_exception& e)
    {
        cout << e.what() << endl;
    }
    catch (const char* e)
    {
        cerr << e << endl;
    }
}