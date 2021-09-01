#include<bits/stdc++.h>
using namespace std;

int first(int arr,int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            high = mid -1;
        }
        else if(arr[mid]<x){
            low = mid + 1;
        }
        else{
            if(mid==0 || arr[mid-1]!=arr[mid]){
                return mid;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int last(int arr,int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            high = mid -1;
        }
        else if(arr[mid]<x){
            low = mid + 1;
        }
        else{
            if(mid==n-1 || arr[mid]!=arr[mid+1]){
                return mid;
            }else{
                low = mid - 1;
            }
        }
    }
    return -1;
}

vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    v.push_back(first(arr,n,x));
    v.push_back(last(arr,n,x));
    return v;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> ans;
        ans = find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}