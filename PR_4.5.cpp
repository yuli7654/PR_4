#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    double x, y;

    srand((unsigned)time(NULL));

    // 1 спосіб: 10 пострілів, координати вводяться з клавіатури
    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((y >= 0 && y <= x && y >= (x - 2) * (x - 2) - 3) ||
            (y <= 0 && y <= -x && y >= (x - 2) * (x - 2) - 3))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    // 2 спосіб: 10 пострілів, x in [-1; 5], y in [-3; 5] - випадково
    for (int i = 0; i < 10; i++)
    {
        x = -1 + 6. * rand() / RAND_MAX;
        y = -3 + 8. * rand() / RAND_MAX;

        if ((y >= 0 && y <= x && y >= (x - 2) * (x - 2) - 3) ||
            (y <= 0 && y <= -x && y >= (x - 2) * (x - 2) - 3))
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }
    return 0;
}
