#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[3];
    for(int i=0; i<3; i++)
    cin >>a[i];
    int b[3];
    for (int i = 0; i < 3; i++)
        cin >> b[i];
    int a1 = 0, a2 = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            a1++;
        }
        else if (a[i] < b[i])
        { 
            a2++;
        }
       
        
    }

    cout << a1 << " " << a2 << endl;
    return 0;
}
