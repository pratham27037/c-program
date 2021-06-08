// 1352A - sum of round numbers
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int arr[6];
        int total=0,ten=1;
        for(int i=1;i<6;i++){
            arr[i]=n%10;
            n=n/10;
            if(arr[i] != 0){
                total++;
            }
        }
        cout<<total<<endl;
        for(int i=1;i<6;i++){
            if(arr[i] !=0){
                cout<<arr[i]*ten<<" ";
            }
            ten = ten * 10;
        }
        cout<<endl;
        t--;
    }
}