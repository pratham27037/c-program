#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x,count=0,sum=0;
    cin>>n;
    x=1;
    while(1){
       for(int i=1;i<=x;i++){
            sum+=i;
       }
       x++;
       if(sum>n)
        break;
       count++;

    }
    cout<<count<<"\n";
    
    return 0;
}