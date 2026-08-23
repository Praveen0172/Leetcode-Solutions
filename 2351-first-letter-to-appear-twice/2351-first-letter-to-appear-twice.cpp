class Solution {
public:
    char repeatedCharacter(string s) {
        char a;
        vector<int> b;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    b.push_back(j);
                }
            }
        }
        int min = 101;
        int c;
        for(int i=0;i<b.size();i++){
            if(b[i]<min){
                min=b[i];
                c=i;
            }
        }
        return s[min];
    }
};