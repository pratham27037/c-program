//merge two arrays and return in sorted order
//arrays are sorted at individual level
#include<iostream>

using namespace std;

void mergeSort(int a[],int b[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i] <= b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<m){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<b[j]<<" ";
        j++;
    }
}

int main(){
    int m,n;
    cout<<"enter size of array 1: ";
    cin>>m;
    int a[m];
    cout<<"enter element in array 1: ";
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"enter size of array 2: ";
    cin>>n;
    int b[n];
    cout<<"enter element in array 2: ";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    mergeSort(a,b,m,n);
    return 0;
}