#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        int c=0,k=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                c++;
                if(k != 0){
                    c--;
                    k--;
                }
            }
            if(s[i]==')'){
                k++;
            }
            if(k>c){
                k--;
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}