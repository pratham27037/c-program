//546A - Soldier and Bananas
#include<bits/stdc++.h>

using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;

    int total_value = 0;

    for(int i=1;i<=w;i++){
        total_value += (i*k);
    }
    if(n>total_value){
        cout<<0;
    }else{
        cout<<total_value-n;
    }
    return 0;
}