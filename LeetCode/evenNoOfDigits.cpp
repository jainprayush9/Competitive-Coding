//Link to the problem: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i,countE=0;
        for(i=0;i<nums.size();i++)
        {
            int countD=0;
            while(nums[i]!=0)
            {
                nums[i]/=10;
                countD++;
            }
            if(countD%2==0)
            {
                countE++;
            }
            
        }
        return countE;
        
    }
};
