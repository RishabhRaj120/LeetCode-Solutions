class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int m1 = 0;
        for (int i = 0; i < n; i++) {
            m1 = m1 ^ (nums[i] ^ i);
        }
        m1 = m1 ^ n;
        return m1;
    }
};
