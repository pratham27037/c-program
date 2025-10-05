#include<iostream>

using namespace std;

void merge(int left,int mid,int right,int a[]){
    int leftsize = mid - left +1;
    int rightsize = right-mid;
    int l[leftsize],r[rightsize];

    for(int i=0;i<leftsize;i++){
        l[i] = a[left+i];
    }
    for(int j=0;j<rightsize;j++){
        r[j] = a[mid+1+j];
    }

    int i=0,j=0,k=left;
    while(i<leftsize && j<rightsize){
        if(l[i] < r[j]){
            a[k] = l[i];
            i++;
            k++;
        }else{
            a[k] = r[j];
            j++;
            k++;
        }
    }
    while(i<leftsize){
        a[k] = l[i];
        i++;
        k++;
    }
    while(j<rightsize){
        a[k] = r[j];
        j++;
        k++;
    }
}

void mergesort(int left,int right,int arr[]){
    if(left >= right){
        return;
    }
    int mid = (left+right) / 2;
    mergesort(left,mid,arr);
    mergesort(mid+1,right,arr);
    merge(left, mid, right,arr);
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
    mergesort(0,n-1,arr);
    cout<<"array after sort: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}