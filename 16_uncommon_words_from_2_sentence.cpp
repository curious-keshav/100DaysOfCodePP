class Solution {
public:
    void addInMap(unordered_map<string, int> &mp, string s){
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                mp[temp]++;
                temp="";
            }else{
                temp+=s[i];
            }
        }
        if(temp!=""){
            mp[temp]++;
        }
    }
    
    void ansFxn(unordered_map<string, int> &mp1, unordered_map<string, int> &mp2, vector<string> &ans ){
        for(auto itr: mp1){
            if(mp2.count(itr.first)==0 and itr.second==1){
                ans.push_back(itr.first);
            }
        }
        for(auto itr: mp2){
            if(mp1.count(itr.first)==0 and itr.second==1){
                ans.push_back(itr.first);
            }
        }
    }

    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp1,mp2;
        addInMap(mp1,s1);
        addInMap(mp2,s2);
        
        vector<string> ans;
        ansFxn(mp1,mp2,ans);
        
        return ans;
    }

};