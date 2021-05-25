//266B - Queue at the School
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t){
        for(int i=1;i<n;i++){
            if(s[i-1]== 'B' && s[i]== 'G'){
                 s[i-1] = 'G';
                 s[i] = 'B';
                i++;
            }
        }
        t--;
    }
    cout<<s;
    return 0;
}