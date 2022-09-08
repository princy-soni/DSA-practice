#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s="";
    for ( int i=1;i<=350; i++){
        s+=to_string(i);
    }
    cin>>n;
    char c =s[n-1];
    int x = c-'0';
    if (x%2==0){
        cout<<"EVEN"<<endl;
    }
    else 
    cout<<"ODD"<<endl;
}