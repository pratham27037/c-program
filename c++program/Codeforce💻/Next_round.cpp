#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i] >= a[k]){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}