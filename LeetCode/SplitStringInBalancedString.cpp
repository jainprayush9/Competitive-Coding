//Link to the problem: https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int countL=0,countR=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')
                countL++;
            if(s[i]=='R')
                countR++;
            if(countL==countR)
                count++;
        }
        return count;
        
    }
};
