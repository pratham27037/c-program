#include<iostream>

using namespace std;

int main (){
    int n,i;
    cout<<"enter size of array";
    //to get size of array to create
    cin>>n;
    int array[n];
    cout<<"enter elements in array";
    //to get input from user
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    //to display the elements of array
    cout<<"array elements are \n";
    //here i is alreadty intialized 
    for(i=0;i<n;i++){
        cout<<array[i]<<"\n";//to print each element in new line
    }
    return 0;
}