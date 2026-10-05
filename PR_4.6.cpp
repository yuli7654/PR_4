
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double S;    // сума
    double P;    // добуток: P = 1*2*...*(i*i)
    int i, k;    // параметри зовнішнього (i) та внутрішнього (k) циклів

    // спосіб 1: while
    S = 0;
    i = 5;
    while (i <= 25)
    {
        P = 1;
        k = 1;
        while (k <= i * i)
        {
            P *= k;
            k++;
        }
        S += sqrt(i * i + P) / i;
        i++;
    }
    cout << S << endl;

    // спосіб 2: do ... while
    S = 0;
    i = 5;
    do {
        P = 1;
        k = 1;
        do {
            P *= k;
            k++;
        } while (k <= i * i);
        S += sqrt(i * i + P) / i;
        i++;
    } while (i <= 25);
    cout << S << endl;

    // спосіб 3: for з наростанням параметрів
    S = 0;
    for (i = 5; i <= 25; i++)
    {
        P = 1;
        for (k = 1; k <= i * i; k++)
        {
            P *= k;
        }
        S += sqrt(i * i + P) / i;
    }
    cout << S << endl;

    // спосіб 4: for зі спаданням параметрів
    S = 0;
    for (i = 25; i >= 5; i--)
    {
        P = 1;
        for (k = i * i; k >= 1; k--)
        {
            P *= k;
        }
        S += sqrt(i * i + P) / i;
    }
    cout << S << endl;

    return 0;
}
