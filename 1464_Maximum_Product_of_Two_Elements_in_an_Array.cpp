#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        long long m1 = INT_MIN;
        long long m2 = INT_MIN;
        for (int i = 0; i < (int)nums.size(); i++)
        {
            if (nums[i] >= m1)
            {
                m2 = m1;
                m1 = nums[i];
            }
            else if (nums[i] > m2)
            {
                m2 = nums[i];
            }
        }
        --m1;
        --m2;
        return m1 * m2;
    }
};