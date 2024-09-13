class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        unordered_map<char,int> mp;
        for(int i=0;i<allowed.size();i++){
            mp[allowed[i]]++;
        }
        for(auto itr: words){
            bool flag = true;
            for(int i=0;i<itr.size();i++){
                if(mp.count(itr[i])==0){
                    flag= false;
                    break;
                }
            }
            if(flag){ans++;}
        }
        return ans;
    }
};