#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        int res = (h*60) + m;
        cout<<1440-res<<"\n";
    }
    return 0;
}