#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        if((n/2)%2!=0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            int even=2;
            for(int i=1;i<=n/2;i++){
                cout<<even<<" ";
                even = even + 2;
            }
            even = even - 2;
            int odd=1;
            for(int i=1;i<n/2;i++){
                cout<<odd<<" ";
                odd = odd + 2;
            }
            cout<<even+n/2-1<<endl;
        }
        t--;
    }
    return 0;
}