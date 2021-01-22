#include<iostream>

using namespace std;

int firstOcc(int arr[],int n,int x){
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(x>arr[mid]){
            low = mid+1;
        }
        else if(x<arr[mid]){
            high = mid-1;
        }
        else{
            if(mid == 0 || arr[mid-1] != arr[mid]){
                return mid;
            }else{
                high = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int n,x;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter array elements in sorted order :";
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    cout<<"enter element to search :";
    cin>>x;

    int position = firstOcc(arr,n,x);
    cout<<"found at: "<<position;
    return 0;
}