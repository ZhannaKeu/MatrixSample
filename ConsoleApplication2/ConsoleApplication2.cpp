// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "");
     cout.setf(ios::fixed);
    cout.precision(2);   
    
    const int n = 5;
    double** matrix{ new double* [n] {} };

    for (int i = 0; i < n; i++)
    {
        matrix[i] = new double[n + 1]{};
        for (int j = 0; j < n + 1; j++)
        {

            matrix[i][j] = (double)(rand() * 100) / RAND_MAX;
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
    double a[n + 1], b[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        a[i] = (double)(rand() * 100) / RAND_MAX;
        cout << a[i] << '\t';
    }
    cout << endl;
    for (int i = 0; i < n + 1; i++)
    {
        b[i] = (double)(rand() * 100) / RAND_MAX;
        cout << b[i] << '\t';
    }
    cout << endl;
    int p, q;
    cin >> p >> q;

    double** newMatrix{ new double* [n+1] {} };

    for (int i = 0; i <n+1; i++)
    {
        newMatrix[i] = new double[n + 2]{};
        if (i <= p)
        {
            for (int j = 0; j < n + 1; j++)
            {
                newMatrix[i][j] = matrix[i][j];
                cout << newMatrix[i][j] << '\t';
            }
            cout << endl;
        }
        if (i == p + 1)
        {
            for (int j = 0; j < n + 1; j++)
            {
                newMatrix[p][j] = a[j];
                cout << newMatrix[p][j] << '\t';
            }
            cout << endl;
        }
        if (i > p + 1)

        {
            for (int j = 0; j < n + 1; j++)
            {
                newMatrix[i][j] = matrix[i - 1][j];
                cout << newMatrix[i][j] << '\t';
            }
            cout << endl;
        }
    }

    for (unsigned i{}; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (unsigned i{}; i < n+1; i++)
    {
        delete[] newMatrix[i];
    }
    delete[] newMatrix;

}


