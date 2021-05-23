#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    string k = "hello";
    int j=0;
    bool istrue = true;
    for(int i=0;i<s.length();i++){
        if(s[i] == k[j]){
            j++;
            istrue = true;
        }
        else{
            if(s[i] == k[j+1]){
                istrue=false;
            }
        }
    }
    if(istrue){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}