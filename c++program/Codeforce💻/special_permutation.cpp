#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==1){
            int k = 0;
            for(int i=n;i>0;i--){
                if(ceil(n/2)==i-1){
                    k = i;
                    continue;
                }
                cout<<i<<" ";
            }
            cout<<k;
        }else{
            for(int i=n;i>0;i--){
            cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
}