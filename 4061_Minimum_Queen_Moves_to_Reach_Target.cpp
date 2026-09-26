#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minQueenMoves(vector<int> &source, vector<int> &target)
    {
        int c1 = source[0];
        int c2 = source[1];

        int m1 = target[0];
        int m2 = target[1];

        if (c1 == m1 && c2 == m2)
        {
            return 0;
        }
        else if (c1 == m1 || c2 == m2 || (abs(c1 - m1) == abs(c2 - m2)))
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
};