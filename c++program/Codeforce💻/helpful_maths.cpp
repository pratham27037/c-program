#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    map<char,int> m;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] != '+'){
            m[s[i]]++;
        }
    }
    int c = 0;
    for(auto x:m){
        while(x.second){
            cout<<x.first;
            c++;
            x.second--;
            if(c<s.size()- (s.size()/2)){
                cout<<'+';
            }
        }
    }
}