#include<bits/stdc++.h>

using namespace std;

int main(){
    double n,m,a;
    cin>>n;
    cin>>m;
    cin>>a;
    cout<<(long long)ceil(n/a)* (long long)ceil(m/a)<<endl;//(long long is used to prevent integer overflow)
    return 0;
}