class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> ans;
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         if (nums[i] + nums[j] == target) {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {-1, -1};
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int val = target - nums[i];
            if(mp.count(nums[i])){
                return {mp[nums[i]],i};
            }else{
                mp[val] = i;
            }
        }
        return {-1,-1};
    }
};