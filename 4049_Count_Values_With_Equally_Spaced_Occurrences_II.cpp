#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countSpecialIntegers(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, vector<int>> mpp1;
        for (int i = 0; i < n; i++)
        {
            mpp1[nums[i]].push_back(i);
        }
        int c1 = 0;
        for (auto it : mpp1)
        {
            vector<int> &v1 = it.second;
            if (v1.size() >= 3)
            {
                bool check = true;
                int diff = v1[1] - v1[0];
                for (int i = 1; i < v1.size(); i++)
                {
                    if (v1[i] - v1[i - 1] != diff)
                    {
                        check = false;
                        break;
                    }
                }
                if (check)
                {
                    ++c1;
                }
            }
        }
        return c1;
    }
};