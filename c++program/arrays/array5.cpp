/*Given	an	array	which	consists	of	only	0,	1	and	2.	Sort	the	array	without	
using	any	sorting	algorithm.*/

// It is like Dutch national flag problem.
#include<iostream>
using namespace std;

int main(){
    int size,i,c1=0,c2=0,c3=0;
    cout<<"enter the size of the array\n";
    cin>>size;
    int array[size];
    cout<<"enter the elemenets in array\n";
    for (i = 0; i < size; i++)
    {
        cin>>array[i];
        if(array[i]==0){
            c1++;
        }else if(array[i]==1){
            c2++;
        }else{
            c3++;
        }
    }
    // cout<<c1<<c2<<c3;
    int j=0;
    while(c1>0){
        array[j++]=0;
        c1--;
    }
    while(c2>0){
        array[j++]=1;
        c2--;
    }
    while(c3>0){
        array[j++]=2;
        c3--;
    }
    for (i = 0; i < size; i++)
    {
        cout<<array[i];
    }
    
    return 0;
}