#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestInteger(int n, int s)
    {
        int m1 = (s + 9 - 1) / 9;
        int m2 = 0;
        if (m1 > n)
        {
            m2 = -1;
        }
        else
        {
            int c1 = s;
            while (n--)
            {
                if (c1 >= 9)
                {
                    m2 = m2 * 10 + 9;
                    c1 = c1 - 9;
                }
                else if (c1 < 9 && c1 > 0)
                {
                    m2 = m2 * 10 + c1;
                    c1 = 0;
                }
                else
                {
                    m2 = m2 * 10;
                }
            }
        }
        return m2;
    }
};