class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int a;

        for(int j = 0; j <= n; j++) {
            bool found = false;

            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == j) {
                    found = true;
                    break;
                }
            }

            if(found == false) {
                a = j;
                break;
            }
        }

        return a;
    }
};