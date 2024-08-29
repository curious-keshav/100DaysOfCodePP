class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans = nums;
        vector<int> prefArr = nums;
        vector<int> suffArr = nums;
        for(int i=1;i<prefArr.size();i++){
            prefArr[i] = prefArr[i]*prefArr[i-1];
        }
        for(int i=suffArr.size()-2;i>=0;i--){
            suffArr[i] = suffArr[i+1]*suffArr[i];
        }
        ans[0] = suffArr[1];
        ans[ans.size()-1] = prefArr[prefArr.size()-2];
        for(int i=1;i<nums.size()-1;i++){
            ans[i] = prefArr[i-1]*suffArr[i+1];
        }
        return ans;
    }
};