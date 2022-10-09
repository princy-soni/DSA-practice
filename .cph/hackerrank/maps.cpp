#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="gfh";
    m.insert({4,"fgh"});
auto it =m.find(6);
if (it==m.end()){
    cout<<"NO value";
}
else{
    cout<<(*it).first<<"    "<<(*it).second;
}
}