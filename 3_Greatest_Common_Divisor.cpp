#include<bits/stdc++.h>
using namespace std;

    ll gcd(ll a, ll b) { return b == 0 ? abs(a) : gcd(b, a % b); }

int gcd(int a,int b){
    if(b==0){
        return abs(a);
    }
    return gcd(b,a%b);
}

int main(){

    return 0;
}