#define ll long long

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    vector<ll> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll> temp = arr;
    for(int i=0;i<arr.size();i++){
        temp[arr[i]] = i;
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }

	return 0;
}