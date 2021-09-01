#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n==2 && n%2==1){
        cout<<1;
    }else{
        int i = 1;
        int j = n-1;
        int count = 0;
        for(;i<n;i++){
            cout<<i<<" "<<j<<"\n";
            if(j%i==0){
                count++;
            }
            j--;
        }
        cout<<count;
    }

    return 0;
}