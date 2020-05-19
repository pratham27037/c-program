#include<bits/stdc++.h>
using namespace std;

void reverse(int array[],int a);
int main(){
    int t;
	cin>>t;
	while(t){
	    int size,z,i=0;
	    cin>>size;
	    cin>>z;
	    int array[size];
	    while(i<size){
	       cin>>array[i]; 
	       i++;
	    }
	    while(z){
	    reverse(array,size);
	    z--;
	    }
        for(i=0;i<size;i++){
            cout<<array[i]<<" ";
        }
        cout<<"\n";
	    t--;
	}
    return 0;
}

void reverse(int array[],int a){
    int temp,i;
    temp = array[0];
    for(i=0;i<a;i++){
        array[i]=array[i+1];
        
    }
    array[a-1]=temp;
    
}
