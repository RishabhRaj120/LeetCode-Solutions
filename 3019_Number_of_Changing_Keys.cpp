#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countKeyChanges(string s1) {
        for (int i = 0; i < s1.length(); i++) {
            s1.at(i) = tolower(s1.at(i));
        }
        int c1 = 0;
        for (int i = 1; i < s1.length(); i++) {
            if (s1.at(i) != s1.at(i - 1)) {
                ++c1;
            }
        }
        return c1;
    }
};
