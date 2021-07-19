#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n*m;i++){
        char s;
        cin>>s;
        if(s=='C' || s=='M' || s=='Y'){
            cout<<"#Color";
            return 0;
        }
    }
    cout<<"#Black&White";
    return 0;
}