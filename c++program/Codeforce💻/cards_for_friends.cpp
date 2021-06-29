#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int w,h,n,count=1;
        cin>>w>>h>>n;
        while (w % 2 == 0) {
            w = w/2;
            count *= 2;
        }
        while (h % 2 == 0) {
            h = h/2;
            count *= 2;
        }
        if(count>=n){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}