class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        vector<int> a;
        for(auto i=accounts.begin();i<accounts.end();i++){
            for(auto j=i->begin();j<i->end();j++){
                sum += *j;
            }
            a.push_back(sum);
            sum=0;
        }
        int b=0;
        for(auto k=a.begin();k<a.end();k++){
            if(*k>=b){
                b=*k;
            }
        }
        return b;
    }
};