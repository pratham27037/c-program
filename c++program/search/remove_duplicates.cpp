#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    int inc = 5;
    for(int i=1;i<=n;i++){
        if(i%5==0){
            cout<<i<<" ";
            i+= inc+1;
            inc += 5;
        }
        cout<<i<<" ";
    }

    return 0;

}