#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
        int count=0;
        while(arr[i]){
            if(arr[i]%10 == 4){
                count++;
            }
            arr[i] = arr[i] / 10;
        }
        cout<<count<<endl;
    }
    return 0;
}