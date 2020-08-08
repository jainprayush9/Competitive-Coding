//Link to the problem: https://leetcode.com/problems/xor-operation-in-an-array/

class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        int i,z=0,x;
        for(i=0;i<n;i++)
        {
            x=start+2*i;
            nums.push_back(x);
        }
        for(i=0;i<n;i++)
        {
            z=z^nums[i];
        }
        return z;
    }
};
