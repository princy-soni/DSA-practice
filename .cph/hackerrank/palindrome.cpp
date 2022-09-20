
#include <bits/stdc++.h>
using namespace std;
int func(int start, int mid, int end, string str, int n, int i)
{
    start = str[0];
    end = str[n - 1];
    mid = (start + end) / 2;
    int count = 0;
    while ( start == end)
    {
        for (i = 0; i < n; i++)
        {
       
            if (start == end)
            {
                count = 0;
                
            }
            if (end > start)
            {
                str[i]--;
                count++;
            }
            else{
                count=0;
            }
            start++;
            end--;
        }
       cout<<count;  

    }
}

int main()
{
    int n;
    int i;
    cin >> n;
    string str = " ";
    for (i = 0; i < n; i++)
    {
        cin >> str;
    }
    cout << func;
}