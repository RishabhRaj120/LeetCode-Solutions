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
        map<char, int> v1; // we will now store character's last index
        for (int i = 0; i < 256; i++)
        {
            v1[i] = -1;
        }
        while (r < n)
        {
            if (v1[s.at(r)] != -1)
            {
                l = max(l, v1[s.at(r)] + 1);
            }
            v1[s.at(r)] = r;
            maxi = max(maxi, r - l + 1);
            ++r;
        }
        return maxi;
    }
};