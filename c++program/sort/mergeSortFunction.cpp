#include<iostream>

using namespace std;

void merge(int a[],int low,int mid,int high){
    int m = mid-low+1,n = high-mid;
    int left[m],right[n];
    for(int i=0;i<m;i++){
        left[i] = a[low+i];
    }
    for(int i=0;i<n;i++){
        right[i] = a[m+i];
    }
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(left[i] <= right[j]){
            a[k]= left[i];
            i++;
            k++;
        }
        else{
            a[k] = right[j];
            k++;
            j++;
        }
    }
    while(i<m){
        a[k] = left[i];
        i++;
        k++;
    }
    while(j<n){
        a[k] = right[j];
        j++;
        k++;
    }
}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter element in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mid;
    cout<<"enter the mid element: ";
    cin>>mid;
    merge(arr,0,mid,n-1);
    cout<<"array after sort: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}