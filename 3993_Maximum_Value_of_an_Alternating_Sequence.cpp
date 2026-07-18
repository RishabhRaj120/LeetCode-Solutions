#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long maximumValue(int n, int s, int m)
    {
        if (n == 1)
        {
            return s;
        }
        else
        {
            long long m1 = n / 2;
            long long m2 = s;
            m2 += (m1 * m);
            m2 += (-m1 + 1);
            return m2;
        }
    }
};