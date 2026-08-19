class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int count =0;
        for(auto i=nums.begin();i<nums.end();i++){
            for(auto j=nums.begin();j<nums.end();j++){
                if(j != i && *j<*i){
                    count++;
                }
            }
            result.emplace_back(count);
            count = 0;
        }
        return result;
    }
};