class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt = 0;
        while(start!=0 and goal!=0){
            int a = start%2;
            int b = goal%2;
            start = start/2;
            goal = goal/2;
            cnt += a^b;
        }
        while(start!=0){
            if(start%2==1){
                cnt++;
            }
            start=start/2;
        }
        while(goal!=0){
            if(goal%2==1){
                cnt++;
            }
            goal=goal/2;
        }
        return cnt;
    }
};