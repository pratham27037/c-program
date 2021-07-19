#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int count=0;
    for(int i=1;i<=n;i++){
        count++;
        if(i%m==0){
            n++;
        }
    }
    cout<<count;
}