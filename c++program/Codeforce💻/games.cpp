#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int home[n],guest[n];
    for(int i=0;i<n;i++){
        cin>>home[i]>>guest[i];
    }

    int count=0;
    for (int i=0; i<n; i++ )
            for(int j=0; j<n; j++)
        {
             if ( i!=j && home[i]==guest[j]) count++;
        }
    cout<<count;
    return 0;
}