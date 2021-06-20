#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0,b=0;
    while(n){
        int m,c;
        cin>>m>>c;
        if(m==c){
            a++;
            b++;
        }
        if(m>c){
            a++;
        }
        if(c>m){
            b++;
        }
        n--;
    }
    if(a==b){
        cout<<"Friendship is magic!^^"<<endl;
    }else if(a>b){
        cout<<"Mishka"<<endl;
    }else{
        cout<<"Chris"<<endl;
    }
    return 0;
}