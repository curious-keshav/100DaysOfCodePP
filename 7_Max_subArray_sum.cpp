class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currTotal=0;
        int maxTotal = INT_MIN;
        for(int i=0;i<nums.size();i++){
            currTotal = max(nums[i],currTotal+nums[i]);
            maxTotal = max(maxTotal,currTotal);
        }
        return maxTotal;
    }
};