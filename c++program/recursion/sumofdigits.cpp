#include <iostream>

using namespace std;

int sumOfDigit(int n)
{

    if (n == 0)
        return 0;
    int k = n % 10;
    return k + sumOfDigit(n / 10);
}

int main()
{
    int n, l;
    cout << "enter any no";
    cin >> n;
    l = sumOfDigit(n);
    cout << l;
}