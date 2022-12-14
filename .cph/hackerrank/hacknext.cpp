#include <bits/stdc++.h>

using namespace std;
void mypairs(vector<int> &arr)
{
    vector<int> diff(arr.size());
    sort(arr.begin(), arr.end());
    int min = INT_MAX;
    for (int i = 1; i < arr.size(); i++)
    {
        diff[i] = arr[i] - arr[i-1];
        if (min > diff[i])
        {
            min = diff[i];
        }
    }
        for (int i = 1; i < arr.size(); i++)
        {
            if (diff[i] == min)
                cout << arr[i - 1] << " " << arr[i] << endl;
        }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mypairs(arr);
    return 0;
}