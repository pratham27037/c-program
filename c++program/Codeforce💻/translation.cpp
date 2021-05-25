//	41A - Translation
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int k = s.length();
    int l = t.length();
    int i,j;
    for(i=0,j=l-1;i<k,j>=0;i++,j--){
        if(s[i] != t[j]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}