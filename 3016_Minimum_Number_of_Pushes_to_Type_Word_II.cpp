#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumPushes(string word)
    {
        vector<int> v1(26, 0);
        for (int i = 0; i < (int)word.length(); i++)
        {
            ++v1[word.at(i) - 'a'];
        }
        sort(v1.begin(), v1.end(), greater<int>());
        int c1 = 0;
        for (int i = 0; i < 26; i++)
        {
            if (v1[i] == 0)
            {
                break;
            }
            else
            {
                c1 += ((i / 8) + 1) * v1[i];
            }
        }
        return c1;
    }
};