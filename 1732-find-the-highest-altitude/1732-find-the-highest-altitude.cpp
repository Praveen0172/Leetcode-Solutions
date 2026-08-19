class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude =0;
        int highest =0;
        for(auto i = gain.begin();i<gain.end();i++){
            altitude+= *i;
            highest = max(highest,altitude);
        }
        return highest;
    }
};