#include<iostream>

using namespace std;

int binarySearch(int arr[],int n,int x){
    
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