//266A - Stones on the Table
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    char prev;
    cin>>prev;
    char curr;
    int count=0;
    for(int i=0;i<n-1;i++){
        cin>>curr;
        if(curr==prev){
            count++;
            prev=curr;
        }
        else{
            prev=curr;
        }
    }
    cout<<count;
    return 0;
}