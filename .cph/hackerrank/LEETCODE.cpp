#include <bits/stdc++.h>
using namespace std;
int thirdMax(vector<int> &nums)
{
    int c = 1;
    sort(nums.rbegin(), nums.rend());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            c++;
            if (c == 3)
                return nums[i + 1];
        }
    }
    return nums[0];
}


