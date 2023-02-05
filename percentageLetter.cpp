//Given a string s and a character letter, return the percentage of characters in s that equal letter rounded down to the nearest whole percent.

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == letter)
            {
                sum++;
            }
        }
        return (sum*100/s.size());
    }
};
