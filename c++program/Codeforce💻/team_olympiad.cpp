#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> a,b,c;

    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        if(k==1){
            a.push_back(i);
        }
        if(k==2){
            b.push_back(i);
        }
        if(k==3){
            c.push_back(i);
        }
    }
    int count = min(min(a.size(),b.size()),c.size());
    cout<<count<<endl;

    vector<int> :: iterator p;
    vector<int> :: iterator q;
    vector<int> :: iterator r;

    p = a.begin();
    q = b.begin();
    r = c.begin();

    while(count--){
        cout << *p << " " << *q << " " << *r << endl;
        p++;
        q++;
        r++;
    }
    return 0;
}