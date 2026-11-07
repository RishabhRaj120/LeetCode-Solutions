#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>> v1;
        sort(nums.begin(), nums.end());
        int m1 = nums[0][0];
        int m2 = nums[0][1];
        for (int i = 1; i < nums.size(); i++) {
            int c1 = nums[i][0]; // start
            int c2 = nums[i][1]; // end
            if (c1 <= m2) {
                m2 = max(c2, m2);
            } else {
                v1.push_back({m1, m2});
                m1 = nums[i][0];
                m2 = nums[i][1];
            }
        }
        v1.push_back({m1, m2});
        return v1;
    }
};
