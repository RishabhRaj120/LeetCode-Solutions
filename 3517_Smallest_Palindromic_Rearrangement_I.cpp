#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string smallestPalindrome(string s)
    {
        vector<int> v1(26, 0);
        for (int i = 0; i < (int)s.length() / 2; i++)
        {
            ++v1[s.at(i) - 'a'];
        }
        string s1(s.length(), 'a');
        if (s.length() % 2 == 1)
        {
            s1[s.length() / 2] = s[s.length() / 2];
        }
        int m1 = 0;
        for (int i = 0; i < 26; i++)
        {
            while (v1[i] > 0)
            {
                s1.at(m1) = (char)(i + 'a');
                --v1[i];
                ++m1;
            }
        }
        for (int i = 0; i < s.length() / 2; i++)
        {
            s1.at(s1.length() - 1 - i) = s1.at(i);
        }
        return s1;
    }
};