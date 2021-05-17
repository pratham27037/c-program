//not completed yet

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,k;
    cin>>t;
    while(t){
        cin>>k;
        int e=0,w=0;
        bool check = true;
        while((e/(e+w)*100) != k){
            if(check == true){
                e++;
                check = false;
            }
            if(check == false){
                w++;
                check = true;
            }
        }
        cout<<e+w<<endl;
        t--;
    }
    return 0;
}