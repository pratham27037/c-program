#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;
    int ans=0;
    for(int i=1;i<=10;i++){
        if(N%i == 0){
            ans = i;
        }
    }
    cout<<ans;
    return 0;
}