#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n==1){
            int a;
            cin>>a;
            cout<<a;
        }else{

        int arr[n+1];

        for(int i=1;i<=n;i++){ // taking input
            cin>>arr[i];
        }

        int l=0,r=0;
        int check = true;
        for(int i=1;i<=n;i++){ // getting l and r
            if(arr[i]!=i && check){
                l=i;
                check = false;
            }
            if(!check && arr[i] == l){
                r = i;
            }
        }
        
        while(l<=r){ // reversing from l to r
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }

        for(int i=1;i<=n;i++){ // final printing
            cout<<arr[i]<<" ";
        }
        }
        cout<<"\n";
    }

    return 0;
}