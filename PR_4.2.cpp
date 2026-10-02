#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx; // аргумент, початок, кінець, крок
    double A, B, y;       // частини функції A, B та результат y

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = tan(x) + 1;                     // tg x + 1

        if (x <= -5)
            B = exp(x / floor(1 - x));      // [ ] - ціла частина
        else
            if (x <= 3)
                B = 3.2 + log10(1.8 * x * x);   // 3,2 + lg(1,8x^2)
            else
                B = x * sqrt(x);     // |x| * sqrt(x)

        y = A - B;                          // y = tg x + 1 - B

        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << y
            << "   |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
