#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int X,A,B;
        cin>>X>>A>>B;
        int res = A + ((100-X)*B);
        cout<<res*10<<"\n";
    }
    return 0;
}