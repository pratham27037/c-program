// Given a String with numbers and operators. Perform the operations on the numbers in their respective order.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int k = 0, l = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i]-'0' >= 0 && s[i]-'0' <= 9)
        {
            // cout<<s[i]<<" ";
            if (l != 0)
            {
                k++;
            }
            else
            {
                j = 1;
                break;
            }
        }
        else
        {
            l++;
        }
    }
    cout<<k<<" "<<l;
    if (k != l + 1 || j == 1)
    {
        cout << "Wrong input";
        return 0;
    }
    cout << "ok";
    return 0;
}