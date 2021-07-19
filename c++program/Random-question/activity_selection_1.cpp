// if givin finish time is already sorted
#include<bits/stdc++.h>

using namespace std;

void printMaxActivity(int s[],int t[],int n){
    int i,j;
    cout<<"Selected activities";
    i=0;
    cout<<" "<<i;
    for(j=1;j<n;j++){
        if(s[j]>=t[i]){
            cout<<" "<<j;
            i=j;
        }
    }
}

int main(){
    int s[] =  {1, 3, 0, 5, 8, 5};
    int f[] =  {2, 4, 6, 7, 9, 9};
    int n = sizeof(s)/sizeof(s[0]);
    printMaxActivity(s, f, n);
    return 0;
}