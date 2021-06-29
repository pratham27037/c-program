#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(c==0){
            cout<<"NO";
        }else{
        a=abs(a);
        b=abs(b);
        c=abs(c);
        if((b+(-a+c))%c==0){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
        }
        
    }
    return 0;
}