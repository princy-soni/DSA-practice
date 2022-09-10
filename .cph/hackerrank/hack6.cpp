#include <bits/stdc++.h>
using namespace std;
int mysum (int *arr,int size){
    int sum;
    sum=0;
    if( size==0){
        sum+=arr[0];

    }
    int remainingpART= sum+mysum(arr+1,size-1);
    return remainingpART;

    

}
int main(){
    int arr[5]={3,2,1,5,6};
    int size=5;
   cout<<mysum(arr,size)<<endl;
}