#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int k = min(n,m);
    if(k%2==0){
        cout<<"Malvika";
    }else{
        cout<<"Akshat";
    }
    return 0;
}