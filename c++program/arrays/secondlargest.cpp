#include<iostream>

using namespace std;

int secondlargest(int arr[],int n)
{
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest =arr[i];
        }
        else if(arr[i]!=arr[largest]){
            if(res == -1 || arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;
}

int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array";
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    int k = secondlargest(arr,n);
    cout<<"second largest element is "<<k;
    return 0;
}