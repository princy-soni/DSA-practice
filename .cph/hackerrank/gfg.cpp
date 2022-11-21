#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> input;
    input.push(34);
    input.push(3);
    input.push(31);
    input.push(98);
    input.push(92);
    input.push(23);
    stack<int> tempuu;
    while(!input.empty()){
    int temp=input.top();
        input.pop();
        while(!tempuu.empty()&& tempuu.top()>temp){
            input.push(tempuu.top());
            tempuu.pop();

        }
        tempuu.push(temp);
    }
   while (!tempuu.empty()){
    cout<<tempuu.top()<<endl;
    tempuu.pop();
   }

}