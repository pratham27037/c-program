#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool isTrue = false;
    while(n){
        if(!isTrue){
            cout<<"I hate ";
            isTrue = true;
        }else{
            cout<<"I love ";
            isTrue = false;
        }
        if(n>1){
            cout<<"that ";
        }else{
            cout<<"it ";
        }
        n--;
    }
    return 0;
}