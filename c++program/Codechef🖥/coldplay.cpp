#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n,m,count=0;
        cin>>n>>m;
        while(n>=m){
            n -= m;
            count++;
        }
        cout<<count<<endl;
        t--;
    }
    return 0;
}