//Link to the problem: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        bool ans=true;
        int N=str.length();
        for(int i=0,j=N-1;i<N/2;i++,j--)
        {
            if(str[i]!=str[j])
            {
                ans=false;
                break;
            }
        }
        return ans;
        
    }
};
