#include<iostream>
using namespace std;

int main(){
    int size,i;
    cout<<"enter size of array\n";
    cin>>size;
    int array[size];
    cout<<"enter elements in array:\n";
    for(i=0 ; i<size;i++){
        cin>>array[i];
    }
    cout<<"array in reverse order :\n";
    for(i=size-1;i>=0;i--){
        cout<<array[i]<<" ";
    }
}