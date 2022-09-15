#include <bits/stdc++.h>
using namespace std;
int camelcase(string &s)


{
    int words = 0;
    for (char &c : s)
        if (int(c) >= 65 && int(c) <= 90)
            words++;

    return ++words;
}
int main(){
    string s;
    camelcase(s);
    return 0;
}
