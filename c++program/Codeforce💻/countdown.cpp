#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int steps = 0;

        steps = s[n-1] - '0';
        for(int i=0;i<n-1;i++){
            if(s[i]!='0'){
                steps += (s[i]- '0') + 1;
            }
        }

        cout<<steps<<"\n";      
    }
    return 0;
}