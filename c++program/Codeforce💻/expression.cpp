#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    int e1 = a+b*c;
    int e2 = a*(b+c);
    int e3 = a*b*c;
    int e4 = (a+b)*c;
    int e5 = a+b+c;
    int e6 = a*b+c;
    int arr[6]={e1,e2,e3,e4,e5,e6};
    sort(arr,arr+6);
    cout<<arr[5];
}