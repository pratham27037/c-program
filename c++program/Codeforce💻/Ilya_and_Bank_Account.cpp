#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    if(n>=0){
        cout<<n;
        return 0;
    }else{
        int k,l;
        k = n%10;
        l = n/10;
        int m = (l/10) * 10 + k;
        if(l>m){
            cout<<l;
        }else{
            cout<<m;
        }
    }
    return 0;
}