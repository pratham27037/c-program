#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        int work1 = 0, work2 = 0;
        work1 = x * 7;
        work2 = (y * d) + (z * (7 - d));
        if (work1 > work2) {
            cout << work1 << "\n";
        } else {
            cout << work2 << "\n";
        }
    }
}