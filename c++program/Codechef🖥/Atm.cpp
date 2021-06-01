#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    double balance,fee=0.50;
    cin>>n>>balance;
    if(n%5==0 && n<= balance-0.50){
        balance = balance -( n + fee);
    }
    
    cout<<fixed<<setprecision(2)<<balance;
    return 0;
}