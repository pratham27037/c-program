#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0,b=0,c=0,d=0,count=0;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        if(t==1){
            a++;
        }else if(t==2){
            b++;
        }else if(t==3){
            c++;
        }else{
            d++;
        }
    }
    // cout<<a<<" "<<b<<" "<<c<<" "<<d;
    count+=d;

    if(c<a){// 3 < 1
        count+=c;
        a=a-c;
        c=0;
    }else if(a<=c){
        count+=a;
        c=c-a;
        a=0;
    }
    // cout<<a<<c;

    if(c>0){
        count+=c;
        c=0;
    }    
    
    if(b>0){
        count+= b/2;
        b = b%2;
    }
    

    int left = a+(b*2);
    // cout<<"left:"<<left;
    if(left<=4 && left>0){
        count+=1;
    }else if(left%4 !=0){
        count+= (left/4) +1;
    }else{
        count+= left/4;
    }


    cout<<count<<"\n";
    return 0;
}