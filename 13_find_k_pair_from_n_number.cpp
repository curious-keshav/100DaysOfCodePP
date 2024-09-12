
#include <bits/stdc++.h>
using namespace std;

void func(vector<int> &vec, int i, int n, int k){
     if(i==n+1 or vec.size()==k){
         if(vec.size()==k){
             for(int i=0;i<vec.size();i++){
                 cout<<vec[i]<<" ";
             }
             cout<<endl;
         }
         return;
     }
     func(vec,i+1,n,k);
     vec.push_back(i);
     func(vec,i+1,n,k);
     vec.pop_back();
}

int main()
{
    int n=3;
    int k=2;
    vector<int> vec;
    func(vec,1,n,k);

    return 0;
}