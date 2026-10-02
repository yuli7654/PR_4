#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;       // параметри функції
    double x, xp, xk, dx; // аргумент, початок, кінець інтервалу, крок
    double F;             // значення функції
    bool ok;              // true, якщо значення F можна обчислити
    const double eps = 1e-9; // точність порівняння знаменника з нулем

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "F" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        ok = false;
        F = 0;

        if (x < 0 && b != 0)
        {
            // F = -(2x - c) / (cx - a)
            if (fabs(c * x - a) > eps)
            {
                F = -(2 * x - c) / (c * x - a);
                ok = true;
            }
        }
        else
            if (x > 0 && b == 0)
            {
                // F = (x - a) / (x - c)
                if (fabs(x - c) > eps)
                {
                    F = (x - a) / (x - c);
                    ok = true;
                }
            }
            else
            {
                // F = -x/c + (-c)/(2x)
                if (fabs(c) > eps && fabs(x) > eps)
                {
                    F = -x / c + (-c) / (2 * x);
                    ok = true;
                }
            }

        cout << "|" << setw(7) << setprecision(2) << x << "    |";
        if (ok)
            cout << setw(10) << setprecision(3) << F;
        else
            cout << setw(10) << "---";
        cout << "     |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
