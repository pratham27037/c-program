//still nt done
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    sort(s, s+n);
    int car = 0;
    int cap = 4;
    for(int i=0; i<n; i++){
        cap -= s[i];
        if(cap<=0){
            car++;
            cap = 4;
        }
        else if(cap==1){
            car++;
            cap = 4;
        }
    }
    cout<<car<<endl;
}