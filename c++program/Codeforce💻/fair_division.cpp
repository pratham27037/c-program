#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], one = 0, two = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1) {
                one++;
            }
            if (arr[i] == 2) {
                two++;
            }
        }
        // cout << one << " " << two << "\n";
        if ((one + 2 * two) % 2 != 0) {
            cout << "NO\n";
        } else {
        int sum = (one + 2 * two) / 2;
        if (sum % 2 == 0 || (sum % 2 == 1 && one != 0)) {
        cout << "YES\n";
        } else {
        cout << "NO\n";
        }
  }
    }
    return 0;
}