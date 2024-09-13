class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
        vector<int> preXor = {arr[0]};
        for(int i=1;i<arr.size();i++){
            int val = preXor[i-1]^arr[i];
            preXor.push_back(val);
        }
        vector<int> ans;
        for(auto itr: q){
            if(itr[0]==0){
                ans.push_back(preXor[itr[1]]);
            }
            else{
                ans.push_back(preXor[itr[1]]^preXor[itr[0]-1]);
            }
        }
        return ans;
    }
};