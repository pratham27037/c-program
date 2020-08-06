#include<iostream>

using namespace std;

int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

int main(){
    int n;
    cout<<"enter upto which yo want to find sum \n";
    cin>>n;
    int k = sum(n);
    cout<<k;
    return 0;
}