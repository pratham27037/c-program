#include<iostream>
#include <algorithm>

using namespace std;

void merge(int a[],int low,int mid,int high){
    int leftSize = mid-low+1,rightSize = high-mid;
    int left[leftSize],right[rightSize];
    for(int i=0;i<leftSize;i++){
        left[i] = a[low+i];
    }
    for(int j=0;j<rightSize;j++){
        right[j] = a[mid+j+1];
    }
    int i=0,j=0,k=low;
    while(i<leftSize && j<rightSize){
        if(left[i] <= right[j]){
            a[k]= left[i];
            i++;
            k++;
        }
        else{
            a[k] = right[j];
            j++;
            k++;
        }
    }
    while(i<leftSize){
        a[k] = left[i];
        i++;
        k++;
    }
    while(j<rightSize){
        a[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int left,int right){
    if (left >= right){
        return;
    }
    if(right > left){
        int mid = left+(right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
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
    mergeSort(arr,0,n-1);
    cout<<"array after sort: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}