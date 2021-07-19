#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        unordered_set<int> s;
        for(int i=0;i<2*n;i++){
            int a;
            cin>>a;
            if (s.find(a) == s.end()){
                v.push_back(a);
            }
            s.insert(a);
        }
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}