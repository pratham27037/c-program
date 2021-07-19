#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n];
        ll mina=INT_MAX,minb=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<mina){
                mina=a[i];
            }
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]<minb){
                minb=b[i];
            }
        }
        // cout<<mina<<minb;
        ll total = 0;
        for(int i=0;i<n;i++){
            if(a[i]-mina>b[i]-minb){
                total+=a[i]-mina;
            }else{
                total+=b[i]-minb;
            }
        }
        cout<<total<<"\n";
    }
    return 0;
}

// for(int i=0;i<n;i++){
//             if(a[i]>mina && b[i]>minb){
//                 ll diffa=a[i]-mina,diffb=b[i]-minb;

//                 if(diffa==diffb){
//                     total+=diffa;
//                     a[i]=a[i]-diffa;
//                     b[i]=b[i]-diffa;
//                 }else  if(diffa > diffb){
//                     total+=diffb;
//                     a[i]=a[i]-diffb;
//                     b[i]=diffb;
//                 }else{
//                     total+=diffa;
//                     b[i]=b[i]-diffa;
//                     a[i]=diffa;
//                 }
//             }

//             if(a[i]>mina){
//                 total+=a[i]-mina;
//             }
//             if(b[i]>minb){
//                 total+=b[i]-minb;
//             }
//         }