class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool a = true;

        if(nums[0] <= nums[nums.size()-1]) {
            for(int i = 0; i < nums.size()-1; i++) {
                if(nums[i] > nums[i+1]) {
                    a = false;
                    break;
                }
            }
        }
        else {
            for(int i = 0; i < nums.size()-1; i++) {
                if(nums[i] < nums[i+1]) {
                    a = false;
                    break;
                }
            }
        }

        return a;
    }
};