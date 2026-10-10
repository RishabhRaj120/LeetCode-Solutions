#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        int c1 = 0;
        stack<char> v1;
        for (int i = 0; i < s.length(); i++) {
            if (s.at(i) == '(') {
                v1.push(s.at(i));
            } else {
                if (!v1.empty()) {
                    if (v1.top() == '(') {
                        v1.pop();
                    } else {
                        ++c1;
                        v1.pop();
                    }
                } else {
                    ++c1;
                }
            }
        }
        if (!v1.empty()) {
            while (!v1.empty()) {
                v1.pop();
                ++c1;
            }
        }
        return c1;
    }
};
