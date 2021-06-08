#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int days=0,total=0;
    while(a&&b){
        days++;
        a--;
        b--;
    }
    while(a>1){
        total++;
        a -=2;
    }
    while(b>1){
        total++;
        b -=2;
    }
    cout<<days<<" "<<total;
    return 0;
}