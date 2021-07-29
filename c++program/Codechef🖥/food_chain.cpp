#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int E,K;
        cin>>E>>K;
        int count=0;
        while(E){
            count++;
            E = floor(E / K);
        }
        cout<<count<<"\n";
    }
    return 0;
}