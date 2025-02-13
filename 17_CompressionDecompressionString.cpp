
#include <bits/stdc++.h>
using namespace std;

string compressString(string &st){
   string ans="";
   char ch = st[0];
   int cnt = 0;
   for(int i=0;i<=st.size();i++){
       if(ch==st[i]){
           cnt++;
       }else{
           ans+=ch;
           ans+='-';
           ans+=to_string(cnt);
           ans+=',';
           ch = st[i];
           cnt = 1;
       }
   }
   return ans;
}

string decompressString(string &st) {
    string ans = "";
    int i = 0;
    
    while (i < st.size()) {
        char ch = st[i]; 
        i++; 
        
        if (i < st.size() and st[i] == '-') { 
            i++; 
            string temp = "";
            
            while (i < st.size() and st[i] != ',') {
                temp += st[i];
                i++;
            }
            
            int count = stoi(temp); 
            ans += string(count, ch); 
        }
        i++; 
    }
    
    return ans;
}


int main()
{
    string st = "AAAA11111BBBCCCC889";
    string compressedString = compressString(st);
    string decompressedString = decompressString(compressedString);
    cout<<compressedString<<endl;
    cout<<decompressedString<<endl;
    return 0;
}
