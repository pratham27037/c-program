#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int arr[n],max=INT_MIN,min=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        // cout<<max<<" "<<min;
        
        t--;
    }
}


// int count=0,i,j;
//         int both=0;
//         bool found=false;
//         for(i=0,j=n-1;i<n/2,j>=n/2;i++,j--){
//             if(arr[i]==max||arr[i]==min){
//                 count++;
//                 both++;
//                 found==true;
//             }
//             if(arr[j]==max||arr[j]==min){
//                 count++;
//                 both++;
//                 found==true;
//             }
//             if(found==true){
//                 // count--;
//                 found=false;
//             }
//             if(both<2){
//                 count++;
//             }else{
//                 break;
//             }
            
//         }
        
//         cout<<count;