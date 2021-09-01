//not to record
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        bool f = false;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            if (x < 0) f = true;
        }

        if (f) {
            cout << "NO\n";
        }

        else {
            cout << "YES\n";
            cout << 101 << '\n';
            for (int i = 0; i <= 100; i++) cout << i << " ";
            cout << '\n';
        }
    }
    return 0;
}