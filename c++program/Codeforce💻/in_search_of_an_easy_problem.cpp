#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    while(n){
        cin>>k;
        if(k==1){
            cout<<"HARD";
            return 0;
        }
        n--;
    }
    cout<<"EASY";
    return 0;
}