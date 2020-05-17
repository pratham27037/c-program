#include<iostream>
using namespace std;

int main(){
    int size,i;
    cout<<"enter the size of the array:\n";
    cin>>size;
    int array[size];
    cout<<"enter the elements in the array:\n";
    for(i=0;i<size;i++){
        cin>>array[i];
    }

    int lower = array[0];
    int higher = array[0];
    int temp;

    for(i=1;i<size;i++){
        if(array[i]<lower){
            temp = lower;
            lower= array[i];
            array[i]=temp;
        }
    }
     for(i=1;i<size;i++){
       if(higher<array[i]){
            temp = higher;
            higher= array[i];
            array[i]=temp;
        }
    }
    
    cout<<"higher element:"<<higher<<"\n";
    cout<<"lower element:"<<lower<<"\n";
    cout<<"difference between highest and lowest element:"<<(higher-lower);
    return 0;
}