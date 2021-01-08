#include<iostream>

using namespace std;

int binarySearch(int arr[],int low,int high,int x){
    
    if(low>high) return -1;

    int mid=(low+high)/2;

    if(arr[mid]==x) return mid;
    else if(arr[mid] > x){
        return binarySearch(arr,low,mid-1,x);
    }else{
        return binarySearch(arr,mid+1,high,x);
    }
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
    int index = binarySearch(arr,0,n,x);
    if(index == -1){
        cout<<"element not found";
    }else{
        cout<<"element found at : "<<index + 1;
    }
    return 0;
}