class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = accumulate(chalk.begin(),chalk.end(),0LL);
        k = k % sum;
        long long temp =0;
        for(int i=0;i<chalk.size();i++){
            temp+=chalk[i];
            if(temp>k){
                return i;
            }
        }
        return -1;
    }
};