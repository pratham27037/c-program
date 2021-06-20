#include<bits/stdc++.h>

using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    int i=2,count=1,res=k;
    while(true){
        if(res%10==0){
            cout<<count;
            break;
        }
        if(res%10==r){
            cout<<count;
            break;
        }
            res = k * i;
            count++;
            i++;
        
    }
    return 0;
}