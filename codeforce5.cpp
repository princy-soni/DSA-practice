#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int arr[5];
    for (int i = 0; i < 5; i++)
    
        cin>>arr[i];
    
    int sum = 0;
    for (int j = 0; j < 5; j++)
    {
        sum = sum + arr[j];
    }
       cout<<sum<<endl;
}