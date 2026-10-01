#include <iostream> 
#include <cmath>

using namespace std;

int main() 
{
    int k, N, i;
    double S;

    cout << "k = "; cin >> k;
    cout << "N = "; cin >> N;

    // 1. Спосіб з циклом while
    S = 0;
    i = k;
    while (i <= N)
    {
        S += sin(cos(1. * i)) / (1. + pow(cos(1. * i), 2));
        i++;
    }
    cout << "while: " << S << endl;

    // 2. Спосіб з циклом do...while
    S = 0;
    i = k;
    do
    {
        S += sin(cos(1. * i)) / (1. + pow(cos(1. * i), 2));
        i++;
    } while (i <= N);
    cout << "do...while: " << S << endl;

    // 3. Спосіб з циклом for (i++)
    S = 0;
    for (i = k; i <= N; i++)
    {
        S += sin(cos(1. * i)) / (1. + pow(cos(1. * i), 2));
    }
    cout << "for (i++): " << S << endl;

    // 4. Спосіб з циклом for (i--)
    S = 0;
    for (i = N; i >= k; i--)
    {
        S += sin(cos(1. * i)) / (1. + pow(cos(1. * i), 2));
    }
    cout << "for (i--): " << S << endl;

    return 0;
}