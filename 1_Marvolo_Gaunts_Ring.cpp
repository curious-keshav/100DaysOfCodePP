#define ll long long

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ll a,b,c;
	ll n;
	vector<ll> arr(n,0);
	
	cin>>n>>a>>b>>c;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}

	if(arr.size()==3) {
		return a*arr[0]+b*arr[1]+c*arr[2];
	}

	ll result = 0;
	
	n = arr.size();
	
	vector<ll> prefArr = arr;
	vector<ll> suffArr = arr;
	
	prefArr[0] = a*arr[0];
	suffArr[n-1] = c*arr[n-1];
	
	for(int i=1;i<n;i++){
	    prefArr[i] = max(a*prefArr[i],prefArr[i-1]);
	}
	
	for(int i=n-2;i>=0;i--){
	    suffArr[i] = max(c*suffArr[i],suffArr[i+1]);
	}
	
    for(int i=1;i<n-1;i++){
        result = max(result,prefArr[i-1]+b*arr[i]+suffArr[i+1]);
        result = max(result,prefArr[i]+b*arr[i]+suffArr[i]);
    }
	cout<<result<<endl;

	return 0;
}
