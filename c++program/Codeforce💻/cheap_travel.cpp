#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    if (m * a <= b){ // to check if cost of buying single journey ticket will  be less than buy for m at once
        cout<<n*a<<"\n";
    }
    else{
        cout<<(n/m)*b+min((n%m)*a,b)<<"\n"; /// if for buying tickets for m station first is cost efficient
    }
 
    return 0;
}