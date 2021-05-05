#include<bits/stdc++.h>

using namespace std;
//here we are looking for 5*2 pairs each pair will give a zero . we have 2 alot but we have to track the no of 5 in the series
int main(){
    int n;//the no for which we have to check
    cout<<"enter the no for factorial: "; 
    cin>>n;
    int res=0;//to store no of zeros
    for(int i=5;i<=n;i=i*5){//the loop will check for zeroes for every *5 i.e.-5,15,125,625,......
        res = res + n/i;//as the 25 and 125 and so on has one or more no of 5 so to take that it into account
    }
    cout<<"the no of trailing zeros are: "<<res;
    return 0;
}