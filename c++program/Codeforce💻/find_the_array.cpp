// not to record
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int total=0;
        int num=1;
        while(s>0){
            total++;
            s-=num;
            num+=2;
        }
        cout<<total<<"\n";
    }
}