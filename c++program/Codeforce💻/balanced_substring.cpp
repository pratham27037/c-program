#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool check = false;
        if(n==1){
            cout<<"-1 -1"<<"\n";
        }
        else{
            for(int i=0;i<n-1;i++){
                if(s[i]!=s[i+1]){
                    cout<<i+1<<" "<<i+2<<"\n";
                    check = true;
                    break;
                }
            }
            if(check == false){
                cout<<"-1 -1"<<"\n";
            }
        }
    }
    return 0;
}