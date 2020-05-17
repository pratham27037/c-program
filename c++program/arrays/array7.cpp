// Move	all	the	negative	elements	to	one	side	of	the	array.
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
    int temp,second[size],j=0;
    //adding elememts in second array in the given order
    for(i=0;i<size;i++){
        if(array[i]<0){
            second[j++]=array[i];//checking for negative elements
        }
    }
    for(i=0;i<size;i++){
        if(array[i]>0){
            second[j++]=array[i];//checking for the positive elements
        }
    }
    for(i=0;i<size;i++){
        cout<<second[i]<<" ";
    }


    return 0;
}