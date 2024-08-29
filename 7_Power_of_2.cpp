class Solution {
public:
    bool isPowerOfTwo(long long n) {

        return n>0 and !(n&(n-1));
        
        // if(n==1){return true;}
        // if(n<=0){return false;}
        // bool flag = true;
        // long long numCheck = n-1;
        // while(numCheck!=1){
        //     if(numCheck%2==1){
        //         numCheck = numCheck/2;
        //     }
        //     else{
        //         flag = false;
        //         break;
        //     }
        // }
        // return flag;
    }
};