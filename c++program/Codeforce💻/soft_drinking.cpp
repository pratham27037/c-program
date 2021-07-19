#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drinks = k*l;
    int total_slices = c*d;
    int total_salt = p/np;

    total_drinks=total_drinks/nl;

    int ans = min(min(total_drinks,total_salt),total_slices)/n;
    cout<<ans<<"\n";
    return 0;
}