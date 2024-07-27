#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    int trash = -1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            trash = i;
            break;
        }
    }

    if (trash == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    int minn = 0;
    for (int i = nums.size() - 1; i > trash; i--)
    {
        if (nums[i] > nums[trash])
        {
            minn = i;
            break;
        }
    }

    swap(nums[trash], nums[minn]);

    reverse(nums.begin() + trash + 1, nums.end());
    return 0;
}