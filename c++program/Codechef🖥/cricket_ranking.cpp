#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int R1,W1,C1,R2,W2,C2;
        cin>>R1>>W1>>C1>>R2>>W2>>C2;
        int counta = 0,countb=0;
        if(R1>R2){
            counta++;
        }
        if(R2>R1){
            countb++;
        }
        if(W1>W2){
            counta++;
        }
        if(W2>W1){
            countb++;
        }
        if(C1>C2){
            counta++;
        }
        if(C2>C1){
            countb++;
        }

        if(counta > countb){
            cout<<"A"<<"\n";
        }else{
            cout<<"B"<<"\n";
        }
    }
    return 0;
}