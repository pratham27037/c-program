#include<iostream>

using namespace std;

int binarySearch(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid] > x){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n,x;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter element to search: ";
    cin>>x;
    int index = binarySearch(arr,n,x);
    if(index == -1){
        cout<<"element not found";
    }else{
        cout<<"element found at : "<<index + 1;
    }
    return 0;
}