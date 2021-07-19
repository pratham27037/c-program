#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0,d=0;
    int i=0,j=n-1;
    bool is_s= true;
    
    while(i<=j){
        int value=0;
        if(a[i]>a[j]){
            value=a[i];
            i++;
        }else{
            value=a[j];
            j--;
        }
        if(is_s==true){
            s+=value;
            is_s=false;
        }else{
            d+=value;
            is_s=true;
        }
    }
    cout<<s<<" "<<d;
    return 0;
}