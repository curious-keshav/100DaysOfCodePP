class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prePro = nums, sufPro = nums;

        for(int i=1;i<n;i++){
            prePro[i] = prePro[i-1]*prePro[i];
        }
        for(int i=n-2;i>=0;i--){
            sufPro[i] = sufPro[i+1]*sufPro[i];
        }

        vector<int> result;
        result.push_back(sufPro[1]);
        for(int i=1;i<n-1;i++){
            int temp = prePro[i-1]*sufPro[i+1];
            result.push_back(temp);
        }
        result.push_back(prePro[n-2]);

        return result;
    }
};