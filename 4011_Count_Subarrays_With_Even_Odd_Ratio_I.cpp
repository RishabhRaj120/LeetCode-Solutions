#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countRatioSubarrays(vector<int> &nums, int a, int b)
    {
        int k = 0;
        int n = (int)nums.size();
        for (int i = 0; i < n; i++)
        {
            int c1 = 0; // even
            int c2 = 0; // odd
            for (int j = i; j < n; j++)
            {
                if (nums[j] & 1)
                {
                    ++c2;
                }
                else
                {
                    ++c1;
                }
                if (c2 > 0 && (c1 * b <= c2 * a))
                {
                    ++k;
                }
            }
        }
        return k;
    }
};