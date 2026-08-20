class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a;
        for(int i=0;i<n;i++){
            a.emplace_back(nums[i]);
        }
        for(int i=n;i<2*n;i++){
            a.insert(a.begin()+2*(i-n)+1,nums[i]);
        }
        return a;
    }
};