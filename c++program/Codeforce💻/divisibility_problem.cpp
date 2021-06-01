#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long int a,b;//upto 10 ^9 they are their
        cin>>a>>b;
        if(a%b==0)
            cout<<"0"<<endl;
        else
            cout<<b-(a%b)<<endl;
    }
    return 0;
}