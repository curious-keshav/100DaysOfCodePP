#include <bits/stdc++.h>
using namespace std;

vector<int> func(vector<int> &vec){
    priority_queue<int> pq;
    for(int i=0;i<vec.size();i++){
        pq.push(vec[i]);
    }
    vector<int> temp,ans;
    while(!pq.empty()){
        temp.push_back(pq.top());
        pq.pop();
    }
    int n = temp.size();
    int i = 0;
    int j = n-1;
    bool flag = false;
    int cnt = 0;
    while(i<j and cnt!=10){
        if(!flag) ans.push_back(temp[i]);
        else ans.push_back(temp[j]);
        i++;j--;
        cnt++;
        flag = !flag;
    }
    return ans;
}

int main()
{
    vector<int> vec = {43,1,53,3,5,6,4,8,6,5,31,35,86,42,75,86,87,32,44,756,2};
    vector<int> ans = func(vec);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
