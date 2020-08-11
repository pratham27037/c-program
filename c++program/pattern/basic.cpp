#include<bits/stdc++.h>
#include <windows.h>

using namespace std;

int main(){
    int ar[5][5];
    int i,j;
    cout<<"condition check"<<"\n";
    Sleep(1000);
    for(i=0;i<5;i++){
        cout<<"#";
        Sleep(1000);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i>j){
                cout<<"*"<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}