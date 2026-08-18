class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        bool a;
        for(auto i=candies.begin();i<candies.end();i++){
            a=true;
            for(auto j = candies.begin(); j < candies.end(); j++) {
        if(*i + extraCandies < *j) {
            a = false;
            break;
        }
    }
            result.push_back(a);
        }
        return result;
    }
};