#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    int value,left;
    cin >> a >> b;

    int sum = a;

    while(a >= b)
    {
        value = a/b;
        sum += value;
        left = a%b;
        a = value + left;
    }
    cout<<sum;
    return 0;
}