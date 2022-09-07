#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    string b;
    cin >> b;
    if (a == b)
    {
        cout << "YES" << endl;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'G')
                a[i] = 'B';
            if (b[i] == 'G')
                b[i] = 'B';
        }
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}