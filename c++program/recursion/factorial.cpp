#include<iostream>

using namespace std;

int factorial(int n)
{
    if(n==0)
        return 1;
    return factorial(n-1)*n;
}

int main(){
    int n;
    cout<<"enter upto which yo want to find sum \n";
    cin>>n;
    if (n < 0){
        cout<<"you entered negative no.";
        exit;
    }
    int k = factorial(n);
    cout<<k;
    return 0;
}