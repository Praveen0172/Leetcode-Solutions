class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int a=0;
        for(auto i=nums.begin();i<nums.end();i++){
            a += *(i);
            sum.push_back(a);
        }
        return sum;
    }
};