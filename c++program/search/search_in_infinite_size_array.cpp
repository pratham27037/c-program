#include<iostream>

using namespace std;

int binarySearch(int arr[],int x,int l,int h){
    while(l<=h){
        int mid = (l+h) / 2;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid]<x){
            l = mid + 1;
        }else{
            h = mid -1;
        }
    }
    return -1;
}

int searchArray(int arr[],int n,int x){
    if(arr[0] == x){
        return 0;
    }

    int i= 1;
    while(arr[i] < x){
        i = i * 2;
    }

    if(arr[i] == x) return i;

    return binarySearch(arr,x,(i/2)+1,i-1);
}

int main(){
    //sample array
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int n = 25;
    int x;
    cout<<"enter element to search : ";
    cin>>x;
    int ans = searchArray(arr,n,x);
    cout<<"location : "<<ans;
    return 0;
}