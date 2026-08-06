#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int prod(int k)
    {
        int c1 = 1;
        while (k != 0)
        {
            int d = k % 10;
            c1 = c1 * d;
            k = k / 10;
        }
        return c1;
    }
    int smallestNumber(int n, int t)
    {
        int m1 = n;
        int m2 = n + t;
        int m3 = 0;
        for (int i = m1; i <= m2; i++)
        {
            if (prod(i) % t == 0)
            {
                m3 = i;
                break;
            }
        }
        return m3;
    }
};