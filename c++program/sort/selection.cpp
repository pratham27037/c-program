#include<iostream>

using namespace std;

void selectSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_ind= i ;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }
        }
        swap(arr[min_ind],arr[i]);
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
    selectSort(arr,n);
    cout<<"array after sort: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}