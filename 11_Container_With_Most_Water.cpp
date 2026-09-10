#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0;
        int r = (int)height.size() - 1;
        int m1 = INT_MIN;
        while (l <= r)
        {
            int dist = r - l;
            int h1 = min(height[l], height[r]);
            m1 = max(m1, dist * h1);
            if (height[l] < height[r])
            {
                ++l;
            }
            else
            {
                --r;
            }
        }
        return m1;
    }
};