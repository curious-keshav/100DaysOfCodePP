class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        if (n == 0) return 0;

        int maxFreq = 0; 
        int ans = 0; 
        unordered_map<char, int> mp;
        int left = 0;
        
        for (int right = 0; right < n; ++right) {
            mp[s[right]]++;
            maxFreq = max(maxFreq, mp[s[right]]);
            
            if ((right - left + 1) - maxFreq > k) {
                mp[s[left]]--;
                left++; 
            }
            ans = max(ans, right - left + 1);
        }
        
        return ans;
    }
};
