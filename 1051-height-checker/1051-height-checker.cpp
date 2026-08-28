class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int a=0;
        vector<int> b;
        b=heights;
        sort(heights.begin(),heights.end());
        for(int i=0;i<b.size();i++){
            if(heights[i]!=b[i]){
                a++;
            }
        }
        return a;
    }
};