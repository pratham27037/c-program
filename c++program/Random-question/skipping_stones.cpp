#include <bits/stdc++.h>
using namespace std;

int fun(string s){
    bool check = true;
    int count = 0;
    int plus=0,minus=0;

    while(check){
        int i = 0;
        // cout<<plus<<minus;
        char k = s[i];
        if(s.length()==1){
            if(k=='-'){
                return 1;
                break;
            }
        }

        if(k=='-'){
            for(int j=0;j<s.length();j++){
                if(s[j]=='-'){
                    s[j] = '+';
                    minus++;
                }else{
                    break;
                }
            }
        }else{
            for(int j=0;j<s.length();j++){
                if(s[j]=='+'){
                    s[j] = '-';
                    plus++;
                }else{
                    break;
                }
            }
        }
        // cout<<s;
        if(plus == s.length()){ // ||  minus==s.length()
            check = false;
        }else{
            count++;
            plus = 0;
            minus = 0;
        }
    }
    return count;
}

int main(){
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        cout<<fun(s);
    }
    
    return 0;
}