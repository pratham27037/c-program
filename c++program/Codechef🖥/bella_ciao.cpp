#include<bits/stdc++.h>

using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T){
//         int D,d,P,Q;
//         int amount=0;
//         cin>>D>>d>>P>>Q;
//         int count=0;
//         for(int i=0;i<D;i++){
//             if(count==d){
//                 P = P + Q;
//                 count = 0;
//             }
//             count++;
//             amount +=P;
//         }
//         cout<<amount<<endl;
//         T--;
//     }
//     return 0;
// }

// int main(){
//     int T;
//     cin>>T;
//     while(T){
//         int D,d,P,Q;
//         int amount=0;
//         cin>>D>>d>>P>>Q;
//         int k = 0;
//         for(int i=0;i<D/d;i++){
//             amount = amount + (d*(P+k));
//             k += Q;
//         }
//         amount = amount + ((D%d)*(P+k));
//         cout<<amount;
//     }
//     return 0;
// }

//notcompleted yet

int main(){
    long long int T;
    cin>>T;
    while(T){
        long long int D,d,P,Q;
        long long int amount=0;
        cin>>D>>d>>P>>Q;
        long long int k=D/d;
        if(k%2==0){
           amount = amount + d*((k/2)*(2*P +(k-1)*Q)); 
        }else{
            amount = amount + d* ( k*(P +((k-1)/2)*Q));
        }
        amount = amount + (D%d)*(P+(k*Q));
        cout<<amount<<endl;
        T--;
    }
}