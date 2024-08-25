class Solution {
  public:
    int *checkDoorStatus(int N) {
        int* ans = new int[N];  
        memset(ans, 0, N * sizeof(int));  
        for(int i=1;i<=N;i++){
            if(floor(sqrt(i))==ceil(sqrt(i))){
                ans[i-1] = 1;
            }
        }
        return ans;
    }
};