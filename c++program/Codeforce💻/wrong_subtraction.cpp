#include<bits/stdc++.h>

using namespace std;

int main(){
    int number,k;
    cin>>number>>k;
    while(k){
        if(number%10 == 0){
            number = number/10;
            k--;
        }else{
            number -= 1;
            k--;
        }
    }
    cout<<number;
    return 0;
}