#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag = true;
        int arr[26]={0};
        arr[s[0]-'A']=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) continue;
            else{
                if(arr[s[i]-'A']==1){
                    cout<<"NO"<<"\n";
                    flag = false;
                    break;
                }
                arr[s[i]-'A']=1;
            }
        }
        if(flag){
            cout<<"YES"<<"\n";
        }
    }
}