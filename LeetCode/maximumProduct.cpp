//Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=nums.size();
        return ((nums[x-1]-1)*(nums[x-2]-1));
        
    }
};
