#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkDivisibility(int n)
    {
        int sum = 0;
        int prod = 1;
        int m1 = n;
        while (n != 0)
        {
            int d = n % 10;
            sum += d;
            prod *= d;
            n = n / 10;
        }
        return !(m1 % (prod + sum));
    }
};