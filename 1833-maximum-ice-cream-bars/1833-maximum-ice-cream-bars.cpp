class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum=0;
        int k;
        for(int i=0;i<costs.size();i++){
            if(costs[i]+sum<=coins){
                sum+=costs[i];
            }
            else{
                k=i;
                break;
            }
        }
        return k;
    }
};