#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int k=2;k<30;++k){
        int s = pow(2,k)-1;
        if(n%s==0){
            cout << n / s << "\n";
				break;
        }
        }
    }
    return 0;
}
    
