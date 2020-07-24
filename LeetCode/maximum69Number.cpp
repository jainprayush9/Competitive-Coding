//Link to the problem: https://leetcode.com/problems/maximum-69-number/

class Solution {
public:
    int maximum69Number (int num) {
        int rev=0,newRev=0;
        int x;
        int count=0;
        while(num!=0)
        {
            x=num%10;
            rev=rev*10+x;
            num=num/10;
        }
        while(rev!=0)
        {
            x=rev%10;
            if(x==6 && count==0)
            {
                x=9;
                count++;
            }
            newRev=newRev*10+x;
            rev=rev/10;
        }
        return newRev;
    }
};
