#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if (x == y && y == z)
        {
            cout << "YES"<<"\n";
            cout << z << " " << z << " " << z;
        }
        else if (x == y && x > z)
        {
            cout << "YES"<<"\n";
            cout << x << " " << z << " " << z;
        }
        else if (x == z && x > y)
        {
            cout << "YES"<<"\n";
            cout << y << " " << x << " " << y;
        }
        else if (y == z && y > x)
        {
            cout << "YES"<<"\n";
            cout << x << " " << x << " " << y;
        }
        else
        {
            cout << "NO"<<"\n";
        }
    }
}