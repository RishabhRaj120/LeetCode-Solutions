#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int maxi = 0;
        int l = 0;
        int r = 0;
        map<char, int> v1;
        while (r < n)
        {
            while (v1[s.at(r)] > 0)
            {
                --v1[s.at(l)];
                ++l;
            }
            ++v1[s.at(r)];
            maxi = max(maxi, r - l + 1);
            ++r;
        }
        return maxi;
    }
};