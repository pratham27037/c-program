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
    int T;
    cin>>T;
    while(T){
        int D,d,P,Q;
        int amount=0;
        cin>>D>>d>>P>>Q;
        int k=D/d;
        if(d==1){
           amount = amount + ((D/2)*(2*P + (D-1)*1)); 
        }else{
            amount = amount + k*((k/2)*(2*P +(k-1)*Q));
            amount = amount + (D%d)*(P+(k*Q));
        }
        cout<<amount<<endl;
        T--;
    }
}