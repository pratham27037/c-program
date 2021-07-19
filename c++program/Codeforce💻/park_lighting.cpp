#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a = n * m;
        int b = a / 2;
        int ans = b + a % 2;
        cout << ans << "\n";
    }
    return 0;
}

        // int n, m;
        // cin >> n >> m;
        // int ans = 0;
        // if (n % 2 != 0 || m % 2 != 0) {
        //     ans = 1;
        //     ans += ceil((m * n) / 2);
        // } else {
        //     ans = ceil((m * n) / 2);
        // }
        // cout << ans << "\n";