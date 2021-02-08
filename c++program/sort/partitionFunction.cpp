#include<bits/stdc++.h>

using namespace std;

void partition(int arr[], int l,int h,int p)
{
    int temp[h-l+1] ,index=0;
    for(int i=l;i<=h;i++){
        if(arr[i] <= arr[p]){
            temp[index] = arr[i];index++;
        }
    }

    for(int i=l;i<=h;i++){
        if(arr[i] > arr[p]){
            temp[index] = arr[i];index++;
        }
    }

    for(int i=l;i<=h;i++){
        arr[i] = temp[i-l];
    }
    
}


int main(){
    int a[]={5,6,3,1,2,7,4};
    int n =sizeof(a)/sizeof(a[0]);
    partition(a,0,n-1,n-1);
    cout<<"array after partition: ";
    for(int x: a)
	    cout<<x<<" ";
}