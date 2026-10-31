#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> v1(n);
        return v1.count();
    }
};
