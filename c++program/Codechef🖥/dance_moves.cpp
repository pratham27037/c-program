#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int X,Y;
        cin>>X>>Y;
        if(X==Y)
        {
            cout<<0<<endl;
        }
        else if(X < Y){
            int diff = Y-X;
            if(diff % 2 == 0){
                cout<<diff/2<<"\n";
            }else
            {
                cout<<(diff/2)+ 2<<"\n";
            }
        }
        else
        {
            int diff = X-Y;
            cout<<diff<<"\n";
        }

        
    }
    return 0;
}