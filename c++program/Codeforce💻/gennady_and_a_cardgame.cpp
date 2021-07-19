#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    bool istrue = false;
    for(int i=0;i<5;i++){
        string h;
        cin>>h;
        if(s[0]==h[0] || s[1]==h[1]){
            cout<<"YES"<<"\n";
            istrue = true;
            break;
        }
    }
    if(!istrue){
        cout<<"NO"<<"\n";
    }
    return 0;
}