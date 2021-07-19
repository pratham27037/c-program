#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int initial=1;
    long long time=0;
    for(int i=0; i<m; i++)
    {
        int present;
        cin>>present;

        if(present >= initial)
            time+=present-initial;
        else
            time+= n-(initial -present);
        initial = present;
    }
    cout<<time;
    return 0;
}