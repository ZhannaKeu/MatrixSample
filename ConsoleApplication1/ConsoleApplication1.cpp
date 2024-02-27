// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "");

    //-------------- 1 -----------------
    //int* p;

    //int* p1{}; // int* p1 = 0;


    //-------------- 2.1 -----------------
    //int x = 2;
    //int* y = &x; // От любой переменной можно взять адрес при помощи операции взятия адреса "&". Эта операция возвращает указатель

    //-------------- 2.2 -----------------
    //int number{ 23 };
    //int* pnumber{ &number };
    //cout << "number = " << number << endl;
    //cout <<"pnumber = "<< pnumber << endl;
    //cout << "&pnumber = " << &pnumber << endl;

    //-------------- 3 -----------------
    //int number{ 25 };
    //int* pnumber{ &number };
    //cout << "Address = " << pnumber << endl;
    //cout << "Value = " << *pnumber << endl;

    //int n2{ *pnumber }; // n2 получает значение, которое хранится по адресу в pn1
    //cout << "n2 = " << n2 << endl;  // n2=25

    //*pnumber = 45;
    //cout << "number = " << number << endl;

    //-------------- 4.1 -----------------
    //int n{ 10 };
    //int* pn{ &n };
    //cout << "address=" << pn << "\tvalue=" << *pn << endl;
    //pn++;
    //cout << "address=" << pn << "\tvalue=" << *pn << endl;
    //pn--;
    //cout << "address=" << pn << "\tvalue=" << *pn << endl;

    //-------------- 4.2 -----------------
    //double d{ 10.6 };
    //double* pd{ &d };
    //cout << "Pointer pd: address:" << pd << endl;
    //pd = pd + 2;   // увеличение адреса на 16 байт - 2 объекта double
    //cout << "Pointer pd: address:" << pd << endl;

    //short n{ 5 };
    //short* pn{ &n };
    //cout << "Pointer pn: address:" << pn << endl;
    //pn = pn - 3;   // уменьшение адреса на 6 байт - размер 3 объектов short
    //cout << "Pointer pn: address:" << pn << endl;

    //-------------- 4.3 -----------------
    //int a{ 10 };
    //int b{ 23 };
    //int* pa{ &a };
    //int* pb{ &b };
    //auto ab{ pa - pb };

    //cout << "pa: " << pa << endl;
    //cout << "pb: " << pb << endl;
    //cout << "ab: " << ab << endl;

    //-------------- 5.1 -----------------
    //int a{ 10 };
    //int* pa{ &a };
    //int b{ *pa + 20 };   
    //pa++;               
    //cout << "b: " << b << endl; 
    //cout << "pa: " << pa << endl;

    //-------------- 5.2 -----------------
    //int a{ 10 };
    //int* pa{ &a };
    //cout << "pa: address=" << pa << "\tvalue=" << *pa << endl;
    //int b{ ++ * pa }; 

    //cout << "b: value=" << b << endl;
    //cout << "pa: address=" << pa << "\tvalue=" << *pa << endl;

    //int b{ *++pa };
    //cout << "b: value=" << b << endl;
    //cout << "pa: address=" << pa << "\tvalue=" << *pa << endl;

    //-------------- 6 -----------------
   // int number{ 5 };
   // int& refNumber{ number };
   // cout << "number = " << number << endl;
   // cout << "refNumber = " << refNumber << endl;
   //// int& refNumber = 10;  // ошибка!!!
   // //refNumber = 20;
   // //cout << "number = " << number << endl;

    //-------------- 7.1 -----------------
    //int numbers[]{ 1, 2, 3, 4, 5 };
    //// меняем число на его квадрат
    //for (auto n : numbers)
    //{
    //    n = n * n;
    //}
    //// смотрим результат
    //for (auto n : numbers)
    //{
    //    cout << n << "\t";
    //}
    //cout << endl;

    //-------------- 7.1 -----------------
    //int numbers[]{ 1, 2, 3, 4, 5 };
    //// теперь n - ссылка на элемент массива
    //for (auto& n : numbers)
    //{
    //    n = n * n;
    //}
    //// смотрим результат
    //for (auto n : numbers)
    //{
    //    cout << n << "\t";
    //}
    //cout << endl;

    //-------------- 8 -----------------
//int* numbers{ new int[4]{ 1, 2, 3, 4 } };
//
//// получение элементов через синтаксис массивов
//std::cout << numbers[0] << std::endl;       // 1
//std::cout << numbers[1] << std::endl;       // 2
//
//// получение элементов через операцию разыменования
//std::cout << *numbers << std::endl;         // 1
//std::cout << *(numbers + 1) << std::endl;     // 2

//-------------- 9 -----------------
//unsigned rows = 3;       // количество строк
//unsigned columns = 2;    // количество столбцов
//int** numbers{ new int* [rows] {} };  // выделяем память под двухмерный массив
//// выделяем память для вложенных массивов
//for (unsigned i{}; i < rows; i++)
//{
//    numbers[i] = new int[columns] {};
//}
//
//// удаление массивов    
//for (unsigned i{}; i < rows; i++)
//{
//    delete[] numbers[i];
//}
//delete[] numbers;

//-------------- 10 -----------------
    //typedef int I4[4];
    //// или так
    //using I4 = int[4];

    //I4 a, b;


}
    

















// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
