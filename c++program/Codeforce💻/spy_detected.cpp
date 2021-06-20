#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>k;
            arr[i]=k;
        }
        if(arr[0]!=arr[1] && arr[1]==arr[2]){
            cout<<1<<"\n";
        }else{
            for(int i=1;i<n;i++){
                if(arr[i]!=arr[0]){
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}