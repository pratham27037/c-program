#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int a,b;
        cin>>a>>b;
        int x=a*2;
        int y=b*2;
        if(x>y)
        {
            if(a>y)
                cout<<a*a<<endl;
            else cout<<y*y<<endl;
        }
        else
        {
            if(b>x)
                cout<<b*b<<endl;
            else cout<<x*x<<endl;
        }
        t--;
    }
}