#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n<=2){
            cout<<1<<"\n";
        }else{
            cout<<floor((n-3)/x + 2)<<"\n";
        }
    }
    return 0;
}