#include<iostream>

using namespace std;

int lastocc(int arr[],int n,int x){
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high) / 2;
        if(arr[mid]<x){
            low = mid + 1;
        }else if(arr[mid]>x){
            high = mid -1;
        }else{
            if(mid != n-1 && arr[mid] != arr[mid+1]){
                return mid+1;
            }else{
                low = mid + 1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,5,5,5,6};
    int n = 9;
    int x;
    cout<<"enter the no to search : ";
    cin>>x;
    cout<<"output according 1 based indexing : ";
    int ans = lastocc(arr,n,x);
    cout<<ans;
}