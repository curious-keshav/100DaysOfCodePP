
#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &vec, int i, int j){
    if(i==j){return max(vec[i],vec[j]);}
    int mid = i+(j-i)/2;
    int maxi1 = func(vec,i,mid);
    int maxi2 = func(vec,mid+1,j);
    return max(maxi1,maxi2);
}
 
int main()
{
    vector<int> vec = {7,1,4,2,5,3,6};
    cout<<func(vec,0,vec.size()-1);
    return 0;
}