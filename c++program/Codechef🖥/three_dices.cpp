#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int X,Y;
        cin>>X>>Y;
        int k = X+Y;
        // cout<<k;
        if(k>=6){
            cout<< 0 <<"\n";
        }else{
            cout << fixed << setprecision(6) << 1-(double)k/6 <<"\n";
        }
    }
    return 0;
}