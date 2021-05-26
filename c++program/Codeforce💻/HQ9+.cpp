//	133A - HQ9+
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    bool isTrue = false;
    for(int i=0;i<s.length();i++){
            if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}