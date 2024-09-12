
#include <bits/stdc++.h>
using namespace std;

void func(vector<int> &vec, int i, vector<int> &arr){
     if(i==arr.size()){
         for(int i=0;i<vec.size();i++){
             cout<<vec[i]<<" ";
         }
         cout<<endl;
         return;
     }
     func(vec,i+1,arr);
     vec.push_back(arr[i]);
     func(vec,i+1,arr);
     vec.pop_back();
}

int main()
{
    vector<int> arr = {1,2,3};
    vector<int> vec;
    func(vec,0,arr);

    return 0;
}