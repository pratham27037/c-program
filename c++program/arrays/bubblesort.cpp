#include<iostream>
using namespace std;

void bubblesort(int array[],int size);

int main(){
    int size,i;
    cout<<"enter sizeof thye array:\n";
    cin>>size;
    int array[size];
    cout<<"enter elements in array:\n";
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"array elements before sorting:\n";
    for(i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    bubblesort(array,size);
    return 0;
}

void bubblesort(int array[],int size){
    int temp,i,round;
    for(round=0;round<size-1;round++){
        for(int i =0 ;i<size-1-round;i++){
            if(array[i]>array[i+1]){
                temp = array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
    cout<<"array after sorting:\n";
    for(i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
