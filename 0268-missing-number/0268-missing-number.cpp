class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int a = n * (n + 1) / 2;

        for(int i = 0; i < n; i++) {
            a -= nums[i];
        }

        return a;
    }
};