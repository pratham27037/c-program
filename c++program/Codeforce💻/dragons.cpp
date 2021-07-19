#include<bits/stdc++.h>

using namespace std;

int main() {
    int s,n;
    cin>>s>>n;
    pair <int,int> arr[1000];
    bool flag = 1;
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        if(s<=arr[i].first){
            flag=0;
            break;
        }
        s+=arr[i].second;
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}