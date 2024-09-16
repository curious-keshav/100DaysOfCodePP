class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        sort(timePoints.begin(), timePoints.end());
        
        // for(int i = 0; i < timePoints.size(); i++) {
        //     cout << timePoints[i] << " ";
        // }
        // cout << endl;

        int mini = INT_MAX; 
        int n = timePoints.size();

        for(int i = 1; i < n; i++) {
            int h1 = (timePoints[i-1][0] - '0') * 10 + (timePoints[i-1][1] - '0');
            int h2 = (timePoints[i][0] - '0') * 10 + (timePoints[i][1] - '0');
            int m1 = (timePoints[i-1][3] - '0') * 10 + (timePoints[i-1][4] - '0');
            int m2 = (timePoints[i][3] - '0') * 10 + (timePoints[i][4] - '0');
            
            int diff = ((h2 - h1) * 60) + (m2 - m1); 
            mini = min(mini, diff); 
        }

        int h1 = (timePoints[0][0] - '0') * 10 + (timePoints[0][1] - '0');
        int h2 = (timePoints[n-1][0] - '0') * 10 + (timePoints[n-1][1] - '0');
        int m1 = (timePoints[0][3] - '0') * 10 + (timePoints[0][4] - '0');
        int m2 = (timePoints[n-1][3] - '0') * 10 + (timePoints[n-1][4] - '0');
        
        int circularDiff = ((h1 - h2) * 60) + (m1 - m2);
        if (circularDiff < 0) {
            circularDiff += 1440; 
        }

        mini = min(mini, circularDiff); 
        return mini;
    }
};
