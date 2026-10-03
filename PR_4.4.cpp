#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double R;            // радіус чвертей кола (0 < R < 3)
    double xp, xk, dx;   // межі інтервалу, крок
    double x, y;

    cout << "R = ";  cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x < 0)
            y = -x / 2;                               // пряма (-2;1)-(0;0)
        else if (x <= R)
            y = R - sqrt(R * R - x * x);              // дуга, центр (0;R)
        else if (x <= 2 * R)
            y = sqrt(R * R - (x - R) * (x - R));      // дуга, центр (R;0)
        else
            y = -(x - 2 * R) / (6 - 2 * R);           // пряма (2R;0)-(6;-1)

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}
