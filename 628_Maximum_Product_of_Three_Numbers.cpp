#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = (int)nums.size();
        long long m1 = nums[0] * nums[1] * nums[n - 1];
        long long m2 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        return max(m1, m2);
    }
};