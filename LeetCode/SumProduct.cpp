//Link to the problem: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,prod=1,x;
        while(n!=0)
        {
            x=n%10;
            prod=prod*x;
            sum=sum+x;
            n=n/10;
        }
        return (prod-sum);
        
    }
};
