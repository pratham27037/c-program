#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    // while(t--){
    //     float n;
    //     cin>>n;
    //     cout<<ceil(n/2)<<endl;
    // }
    while(t--){
        int n;
        cin>>n;
        int ans = n/2;
        if(n%2==1)ans++;
        cout<<ans<<endl;
    }
    return 0;
}