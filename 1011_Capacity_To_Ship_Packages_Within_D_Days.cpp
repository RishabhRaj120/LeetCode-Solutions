#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int loadcheck(vector<int> &weights, int capacity)
    {
        int c1 = 0;
        int c2 = 0;
        int v1 = 1;
        for (int i = 0; i < weights.size(); i++)
        {
            if (c1 + weights[i] <= capacity)
            {
                c1 += weights[i];
            }
            else
            {
                c1 = weights[i];
                ++v1;
            }
        }
        return v1;
    }
    int shipWithinDays(vector<int> &weights, int days)
    {
        int m1 = INT_MIN;
        int m2 = 0;
        for (int i = 0; i < weights.size(); i++)
        {
            if (weights[i] > m1)
            {
                m1 = weights[i];
            }
            m2 += weights[i];
        }
        int low = m1;
        int high = m2;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (loadcheck(weights, mid) > days)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return low;
    }
};