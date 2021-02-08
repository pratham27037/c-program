#include<iostream>

using namespace std;

//this partion function is lumito partition
//it places the element at right position in one run
int partition(int arr[],int l,int h){
    int pivot=arr[h];
    int i = l-1;
    for(int j=l ; j<= h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
}

void qSort(int arr[],int l,int h){
    if(l<h){
        int p= partition(arr,l,h);
        qSort(arr,l,p-1);
        qSort(arr,p+1,h);
    }
}

int main(){
    int a[]={5,6,3,1,2,7,4};
    int n =sizeof(a)/sizeof(a[0]);
    qSort(a,0,n-1);
    cout<<"array after sort: ";
    for(int x: a)
	    cout<<x<<" ";
}

