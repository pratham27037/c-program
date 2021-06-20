#include<bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin>>k;
    if(k%2==0){
        int count=k/2;
        cout<<count<<"\n";
        for(int i=0;i<count;i++){
            cout<<2<<" ";
        }
    }else{
        int count=k/2;
        cout<<count<<"\n";
        for(int i=0;i<count-1;i++){
            cout<<2<<" ";
        }
        cout<<3<<" ";
    }
    return 0;
}