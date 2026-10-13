#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double xp, xk, x, dx, eps, a=0, R=0, S=0, y;
    int n=0;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << setw(10) << "x" << setw(15) << "sin(x)/x" << setw(15) << "S" << setw(8) << "n" << endl;
    
    x = xp;
    while (x <= xk)
    {
        n = 0; a = 1; S = a;
        do
        {
            n++;
            R = -x * x / ((2 * n) * (2 * n + 1));
            a *= R;
            S += a;
        }
        while (fabs(a) >= eps);

        if (x == 0)
            y = 1;
        else
            y = sin(x) / x;
        cout << setw(10) << setprecision(2) << x << setw(15) << setprecision(6) << y << setw(15) << setprecision(6) << S << setw(8) << n << endl;
    
        x += dx;
    }
    return 0;
}