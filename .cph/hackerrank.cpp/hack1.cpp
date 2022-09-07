#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    int pc = 0, nc = 0, zc = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            pc++;
        }
        else if (a[i] < 0)
        {
            nc++;
        }
        else
        {
            zc++;
        }
    }
    cout << setprecision(6) << fixed << (double)pc / n << '\n';
    cout << setprecision(6) << fixed << (double)nc / n << '\n';
    cout << setprecision(6) << fixed << (double)zc / n << '\n';

    return 0;
}
