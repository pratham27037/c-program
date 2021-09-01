#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
 
    string k = s;
    sort(k.begin(), k.end());
 
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += (s[i] != k[i]);
 
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}