#include<iostream>
using namespace std;

int main(){
    int size,i,number,count=0;
    cout<<"enter the size of the array:\n";
    cin>>size;
    int array[size];
    cout<<"enter the array elements:\n";
    for(i=0 ;i<size;i++){
        cin>>array[i];
    }
    cout<<"enter the number to be search its occurence:\n";
    cin>>number;
    for(i=0 ;i<size;i++){
        if(array[i]==number){
            count++;
        }
    }
    cout<<"the total number of times "<< number<<" is present in array is :" <<count;
}