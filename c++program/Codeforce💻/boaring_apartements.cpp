#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int count=0,digit;
        while(x){
            count++;
            digit = x%10;
            x=x/10;
        }
        // cout<<digit<<"\n";
        // cout<<count;
        if(count==4){
            cout<<digit*10<<"\n";
        }else if(count==3){
            cout<<(digit-1)*10+6<<"\n";
        }else if(count==2){
            cout<<(digit-1)*10+3<<"\n";
        }else{
            cout<<(digit-1)*10+1<<"\n";
        }
    }
    return 0;
}