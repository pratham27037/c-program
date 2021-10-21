#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int in = 0 , eng =0 ;
        for(int i=0;i<5;i++){
            int n;
            cin>>n;
            if(n==1){
                in++;
            }else if(n==2){
                eng++;
            }
        }
        if(in==eng){
            cout<<"DRAW";
        }else if(in>eng){
            cout<<"INDIA";
        }else{
            cout<<"ENGLAND";
        }
    }
    return 0;
}