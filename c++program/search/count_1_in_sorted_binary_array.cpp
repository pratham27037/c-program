#include<iostream>

using namespace std;

int countOne(int arr[],int n){
    int low=0,high = n-1;
    while(low<=high){
        int mid = (low+high) /2;
        if(arr[mid] == 0){
            low = mid + 1;
        }else{
            if(mid == 0 || arr[mid-1] != arr[mid]){
                return (n-mid);
            }else{
                high = mid -1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[]= {0,0,0,0,1,1,1,1,1,1};
    int n = 10;
    int ans = countOne(arr,n);
    cout<<"count of 1 : "<<ans;
    return 0;
}