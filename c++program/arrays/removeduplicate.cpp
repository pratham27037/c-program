#include<iostream>

using namespace std;

//practicaly returning unique elements in array
int removeDuplicate(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array";
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    int k=removeDuplicate(arr,n);
    cout<<"total unique element in arr "<<k;
    return 0;
}