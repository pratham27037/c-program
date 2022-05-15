#include<bits/stdc++.h>

using namespace std;

// sub-sequences of array
void printF(int ind, vector<int> &ds, int sum, int k, int arr[], int n) {
    if (ind == n) {
        if (sum == k) {
            for (auto it : ds) {
                cout << it << " ";
                cout << endl;
            }
            return;
        }
    }
    ds.push_back(arr[ind]);
    sum += arr[ind];
    printF(ind + 1, ds, sum, k, arr, n);
    sum -= arr[ind];
    ds.pop_back();
    printF(ind + 1, ds, sum, k, arr, n);
}

int main() {

    int arr[] = {17, 18, 6, 11, 2, 4};
    int n = 6;
    int k = 6;
    vector<int> ds;
    printF(0, ds, 0, k, arr, n);

    return 0;

}