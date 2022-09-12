#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];

    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int curlength = 0;
    int maxlen = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (curlength > maxlen)
            {
                maxlen=curlength ;
            }
            curlength = 0;
        }
        curlength++;
        if (arr[i] == '\0')
            break;
        i++;
    }
    cout << maxlen << endl;
    return 0;
}