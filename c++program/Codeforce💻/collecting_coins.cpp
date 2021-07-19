#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int maxn= max(a,(max(b,c)));
        int coins = maxn - a;
        coins += maxn-b;
        coins += maxn-c;
        // cout<<coins;

        if(n >= coins) {
            n -= coins;
            if(n % 3 == 0){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        else{
            cout<<"NO"<<"\n";
        }
        
    }
    return 0;
}