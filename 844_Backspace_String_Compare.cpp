#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        for (int i = 0; i < s.length();)
        {
            if (s.at(i) == '#')
            {
                if (i > 0)
                {
                    s.erase(i - 1, 2);
                    i = max(0, i - 1);
                }
                else
                {
                    s.erase(0, 1);
                }
            }
            else
            {
                i++;
            }
        }
        for (int i = 0; i < t.length();)
        {
            if (t.at(i) == '#')
            {
                if (i > 0)
                {
                    t.erase(i - 1, 2);
                    i = max(0, i - 1);
                }
                else
                {
                    t.erase(0, 1);
                }
            }
            else
            {
                i++;
            }
        }
        return s == t;
    }
};