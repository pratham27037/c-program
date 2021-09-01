#include<bits/stdc++.h>

using namespace std;

int main(){
    int ans = 0;
    string s;
    cout<<"enter string : ";
    cin>>s;
    if((s[0]-'A')>13){
        ans += 26 - (s[0]-'A');
    }else{
        ans += (s[0]-'A');
    }
    cout<<ans<<"\n";
    for(int i=1;i<s.length();i++){
        int k = abs((s[i]-'A')-(s[i-1]-'A'));
        int l = 26 - k;
        ans += min(k,l);
    }
    cout<<ans<<"\n";
}