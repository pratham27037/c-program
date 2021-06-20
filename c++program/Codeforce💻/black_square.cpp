#include<bits/stdc++.h>

using namespace std;

int main(){
    int a1,a2,a3,a4,count=0;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            count= count + a1;
        }else if(s[i]=='2'){
            count= count + a2;
        }else if(s[i]=='3'){
            count= count + a3;
        }else{
            count= count + a4;
        }
    }
    cout<<count;
    return 0;
}