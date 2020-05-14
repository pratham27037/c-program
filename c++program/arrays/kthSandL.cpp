#include<iostream>
using namespace std;
//for sorted array for non sorted sort first and give answer
int main(){
    int size,k;
    cout<<"enter kth term to search for kth smallest and largest\n";
    cin>>k;
    cout<<"enter the size of the array\n";
    cin>>size;
    int array[size],i;
    cout<<"enter the elements in array\n";
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<k<<"th smallest no:"<<array[k-1];
    cout<<k<<"th largest no:"<<array[size-k];
}