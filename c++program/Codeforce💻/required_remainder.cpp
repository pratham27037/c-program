#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int x,y,n;
    cin>>x>>y>>n;
    int ans = x * ((n-y)/x) + y ;
    if (ans > n){
        ans -= x ;
    }
    cout<<ans<<endl;
    }
}