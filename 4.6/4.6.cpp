#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double P, S;
    int n, i;

    // 1 спосіб: while + while
    S = 0;
    n = 1;

    while (n <= 10)
    {
        P = 1;
        i = 1;

        while (i <= n)
        {
            P *= (double)i / n;
            i++;
        }

        S += (1 + P) / (n * n);
        n++;
    }

    cout << S << endl;


    // 2 спосіб: do while + do while
    S = 0;
    n = 1;

    do
    {
        P = 1;
        i = 1;

        do
        {
            P *= (double)i / n;
            i++;
        } while (i <= n);

        S += (1 + P) / (n * n);
        n++;

    } while (n <= 10);

    cout << S << endl;


    // 3 спосіб: for + for, n++ та i++
    S = 0;

    for (n = 1; n <= 10; n++)
    {
        P = 1;

        for (i = 1; i <= n; i++)
        {
            P *= (double)i / n;
        }

        S += (1 + P) / (n * n);
    }

    cout << S << endl;


    // 4 спосіб: for + for, n-- та i--
    S = 0;

    for (n = 10; n >= 1; n--)
    {
        P = 1;

        for (i = n; i >= 1; i--)
        {
            P *= (double)i / n;
        }

        S += (1 + P) / (n * n);
    }

    cout << S << endl;

    return 0;
}