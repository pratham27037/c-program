//677A - Vanya and Fence
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int i;//individual height
    int count=0;
    while(n){
        cin>>i;
        if(i>h){
            count +=2;
        }else{
            count++;
        }
        n--;
    }
    cout<<count;
    return 0;
}