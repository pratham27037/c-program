#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        int sum1 = 0,sum2=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum1+=a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
            sum2+=b[i];
        }
        if(sum1!=sum2){
            continue;
        }else{
            
        }

    }
}