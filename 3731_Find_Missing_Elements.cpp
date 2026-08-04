#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findMissingElements(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        map<int, int> v1;
        for (int i = 0; i < nums.size(); i++)
        {
            ++v1[nums[i]];
        }
        int m1 = nums[0];
        int m2 = nums[nums.size() - 1];
        vector<int> v2;
        for (int i = m1; i <= m2; i++)
        {
            if (v1[i] == 0)
            {
                v2.push_back(i);
            }
        }
        return v2;
    }
};