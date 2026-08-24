class Solution {
public:
    int romanToInt(string s) {
        int n = 0;

        for (int i = 0; i < s.size(); i++) {

            if (i + 1 < s.size() && 
                ((s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) ||
                 (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) ||
                 (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')))) {

                if (s[i] == 'I') n -= 1;
                else if (s[i] == 'X') n -= 10;
                else if (s[i] == 'C') n -= 100;

            } else {

                if (s[i] == 'I') n += 1;
                else if (s[i] == 'V') n += 5;
                else if (s[i] == 'X') n += 10;
                else if (s[i] == 'L') n += 50;
                else if (s[i] == 'C') n += 100;
                else if (s[i] == 'D') n += 500;
                else if (s[i] == 'M') n += 1000;
            }
        }

        return n;
    }
};