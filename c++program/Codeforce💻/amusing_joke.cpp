#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b,c,s;
    cin>>a>>b>>c;

    s = a+b;//final string 

    sort(s.begin(), s.end());
    sort(c.begin(), c.end());

    if(s == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
    return 0;
}