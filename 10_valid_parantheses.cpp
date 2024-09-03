class Solution {
public:
    bool isMatchingParentheses(char a, char b){
        if(a=='(' and b==')'){return true;}
        if(a=='{' and b=='}'){return true;}
        if(a=='[' and b==']'){return true;}
        return false;
    }
    bool isValid(string s) {
        if(s.size()<=1){return false;}
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                st.push(s[i]);
            }else{
                if (st.empty() or !isMatchingParentheses(st.top(), s[i])) {
                    return false;
                }
                    st.pop();
            }
        }
        if(st.empty()){return true;}
        return false;
    }
};