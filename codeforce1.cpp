#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 2);
    int sum = 0;
    for (int j = 0; j < n + 2; j++)
    {
        cin >> v[j];
        sum += v[j];
    }
    bool f = 0;
    int x = -1;
    int y = -1;
    for (int k = 0; k < n + 2; k++)
    {
        for (int j = k + 1; j < n + 2; j++)
        {
            sum -= v[k] + v[j];
            if (sum == v[k])
            {
                y = v[k];
                x = v[j];
                f = 1;
                break;
            }
            else
                sum += v[j] + v[k];
        }
        if (f == 1)
        {
            break;
        }
    }

    if (f == 1)
    {
        vector<int> ans;
        for (int i = 0; i < n + 2; i++)
        {
            if (v[i] != x && v[i] != y)
            {
                ans.push_back(v[i]);
                continue;
            }
            else
            {
                if (v[i] == x)
                    x = -1;
                if (v[i] == y)
                    y = -1;
            }
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    else
    {
        cout << -1 << "\n";
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
