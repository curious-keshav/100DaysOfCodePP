
#include <bits/stdc++.h>
using namespace std;

int func(int n, int k){
    if(k==0){return 1;}
    int val1 = func(n,k/2);
    if(k%2==0){
        return val1*val1;
    }else{
        return val1*val1*n;
    }
}

int main()
{
    int n=2;
    int k=3;
    cout<<func(n,k);
    return 0;
}