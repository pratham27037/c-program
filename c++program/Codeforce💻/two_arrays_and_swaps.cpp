#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int sum=0,i=0,j=n-1;
        for(int l=0;l<k;l++){
            if(a[i]<b[j]){
                a[i]=b[j];
            }
            i++;
            j--;
        }
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" "<<"\n";
        // }
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}