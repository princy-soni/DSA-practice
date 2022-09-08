#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int apl = 0;
    int orng = 0;
    for (int i = 0; i < apples.size(); i++)
    {
        apples[i] += a;
        if (apples[i] >= s && apples[i] <= t)
        {
            apl++;
        }
    }
    for (int i = 0; i < oranges.size(); i++)
    {
        oranges[i] += b;
        if (oranges[i] >= s && oranges[i] <= t)
        {
            orng++;
        }
    }
    cout << apl << endl
         << orng;
}