#include <bits/stdc++.h>
using namespace std;
bool linearsearch(int arr[], int size, int key)
{
    // base case
    if (size == 0)
    {

        return false;
    }
    if (arr[0]==key){
        return true;
    }
    else{

        bool remainingPart = linearsearch(arr + 1, size - 1, key) ;
        return remainingPart;
    }
}

int main()
{
    int arr[6] = {2, 3, 6, 7, 9, 1};
    int size = 6;
    int key = 7;
    bool ans = linearsearch(arr, size, key);
    if (ans)
    {
        cout << "present" << endl;
    }
    else
        cout << "not present" << endl;
}