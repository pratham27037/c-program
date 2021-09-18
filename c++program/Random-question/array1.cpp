#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int sum = 0;
    int c = 0;
    for(int i=0;i<t;i++){
        if(arr[i]==0){
            c++;
        }else{
            sum += c;
        }
    }
    cout<<sum<<"\n";
    return 0;
}