#include<iostream>

using namespace std;
int fun(int n){
    if(n>0){
        static int x = 0;
        x++;
        return fun(n-1) + x ;
        // return fun(n-1) + n ;

    }
    return 0;
}

int main(){
    int r;
    r=fun(5);
    cout<<r<<"\n";
    return 0;
}