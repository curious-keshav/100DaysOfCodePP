class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        int result = INT_MAX;
        int tempCount = 0;
        int totalLessThanK = 0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                totalLessThanK++;
            }
        }
        
        for(int i=0;i<totalLessThanK;i++){
            if(arr[i]<=k){
                tempCount++;
            }
        }
        
        result= min(result,totalLessThanK-tempCount);

        for(int i=1;i<=n-totalLessThanK;i++){
            if(arr[i-1]<=k){
                tempCount--;
            }
            if(arr[i+totalLessThanK-1]<=k){
                tempCount++;
            }
            result= min(result,totalLessThanK-tempCount);
        }
        
        return result;
        
    }
};