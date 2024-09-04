class Solution {
public:

    int func(int num) {
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int func2(string s) {
        int num = 0;
        for (int i = 0; i < s.size(); i++) {
            num += s[i] - '0'; 
        }
        return num;
    }

    int getLucky(string s, int k) {
        string ss = "";
       
        for (int i = 0; i < s.size(); i++) {
            int value = s[i] - 'a' + 1;
            ss += to_string(value);
        }

        int finNum = func2(ss);
        
        while (k!=1) {
            finNum = func(finNum);
            k--;
        }
        
        return finNum;
    }
};
