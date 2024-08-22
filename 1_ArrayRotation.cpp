// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k%n;
//         vector<int> temp;
//         for(int i=n-k;i<n;i++){
//             temp.push_back(nums[i]);
//         }
//         for(int i=0;i<n-k;i++){
//             temp.push_back(nums[i]);
//         }
//         nums = temp;
//     }
// };


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(),(nums.begin()+(n-k)));
        reverse(nums.begin()+(n-k), nums.end());
        reverse(nums.begin(),nums.end());
    }
};
