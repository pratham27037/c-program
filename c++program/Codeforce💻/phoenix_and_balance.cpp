#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        int two=2;
        for(int i=1;i<=n;i++){
            arr[i]=two;
            two=two*2;
        }
        // for(int i=1;i<=n;i++){
        //     cout<<arr[i];
        // }
        int suma=0,sumb=0;
        for(int i=1;i<n/2;i++){
            suma += arr[i];
        }
        // cout<<suma;
        for(int i=n/2;i<n-1;i++){
            sumb += arr[i];
        }
        // cout<<sumb;
        suma+=arr[n-1];
        cout<<suma-sumb<<endl;
    }
}