#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, x, dx;   // інтервал, аргумент і крок табуляції
    double eps;             // точність обчислення суми ряду
    double a = 0;           // поточний доданок ряду
    double R = 0;           // коефіцієнт рекурентності
    double Sum = 0;         // сума ряду в дужках
    double S = 0;           // значення pi/2 - Sum
    double PI = 4 * atan(1.);
    int n = 0;              // номер доданка

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(10) << "arccos(x)" << "   |"
        << setw(7) << "S" << "      |"
        << setw(5) << "n" << "   |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        n = 0;               // номер першого доданка
        a = x;               // перший доданок: a(0) = x
        Sum = a;
        do {
            n++;
            // коефіцієнт рекурентності: a(n) = a(n-1) * R
            R = x * x * (2. * n - 1) * (2. * n - 1) / (2. * n * (2. * n + 1));
            a *= R;
            Sum += a;
        } while (abs(a) >= eps);
        S = PI / 2 - Sum;

        cout << "|" << setw(7) << setprecision(2) << x << "   |"
            << setw(10) << setprecision(5) << acos(x) << "   |"
            << setw(10) << setprecision(5) << S << "   |"
            << setw(5) << n << "   |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;

    return 0;
}