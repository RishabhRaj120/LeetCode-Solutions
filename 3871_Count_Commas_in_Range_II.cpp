#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long countCommas(long long n)
    {
        long long c1 = 0;
        long long m1 = 1000;
        while (m1 <= n)
        {
            c1 += (n - m1 + 1);
            m1 = m1 * 1000;
        }
        return c1;
    }
};