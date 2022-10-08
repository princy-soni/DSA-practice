#include <bits/stdc++.h>
using namespace std;
int solve(int nums[], int size)
{
    int count = 0;
    sort(nums[0], nums[size - 1]);
    for (int i = nums[size - 2]; i < size; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            count++;
        }
        if (count == 3)
        {
            return count;
        }
        else
            return nums[size - 1];
    }

    int main()
    {
        int size;
        cin >> size;
        int nums[];
        for (int i = 0; i < size; i++)
        {
            cin >> nums[size];
        }
        cout << solve(nums, size) << endl;

        return 0;
    }