#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,x,n;
    cin>>m>>x>>n;
    int arr[m];

    unordered_map<int, int> mp;
    for (int i = 0; i < m; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    bool isfound = false;
    vector<int> ans;
    int p = 0;
    for(auto c:mp){
        if(c.second == x){
            ans.push_back(c.first);
            isfound = true;
            p++;
        }
    }

    if(isfound == false){
        cout<<"Sorry";
    }else{
        if(p>=n){
            cout<<ans[n-1];  
        }else{
           cout<<"Sorry"; 
        }
    }
    return 0;
}