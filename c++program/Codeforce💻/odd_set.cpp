#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int e=0,o=0;
        for(int i=0;i<2*n;i++){
            int k;
            cin>>k;
            if(k%2==0){
                e++;
            }else{
                o++;
            }
        }
        
        if(e==n){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}