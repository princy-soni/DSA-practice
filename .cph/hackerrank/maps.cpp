#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="gfh";
    m.insert({4,"fgh"});
    for (auto &pr: m){
        cout<<pr.first<<"  "<<pr.second<<endl;
    }
}