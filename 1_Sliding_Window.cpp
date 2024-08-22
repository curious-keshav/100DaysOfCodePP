#define ll long long

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ll k,n;
	cin>>n>>k;
	vector<ll> arr(n,0);
	
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	vector<ll> result;
	
	ll temp = 0;
	
	for(int i=0;i<k;i++){
	    temp += arr[i];
	}
	result.push_back(temp);
	
	for(int i=1;i<=n-k;i++){
	    temp -= arr[i-1];
	    temp += arr[i+k-1];
	    result.push_back(temp);
	}
	
	for(int i=0;i<result.size();i++){
	    cout<<result[i]<<" ";
	}
	
	return 0;
}