#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 != i % 2) {
                if (i % 2 == 0) {
                    count0++;
                } else {
                    count1++;
                }
            }
        }
        if (count1 == count0) {
            cout << count1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}