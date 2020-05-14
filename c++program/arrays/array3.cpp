#include<iostream>
using namespace std;
int main(){
    int size,i,small,large;
    cout<<"enter size of array\n";
    cin>>size;
    int array[size];
    cout<<"enter elements in array";
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    large=small=array[0];
     for(i=0;i<size;i++){
        if(array[i]<small){
            small=array[i];
        }else if(array[i]>large){
            large=array[i];
        }
    }
    cout<<"smallest element is:"<<small;
    cout<<"largest element is:"<<large;
    return 0;
}