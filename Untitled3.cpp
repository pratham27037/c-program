//insertion sort
#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0&&temp<a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
}
int main(){
    int i,b;
    cout<<"enter size of the array";
    cin>>b;
    int a[b];
    cout<<"enter elements in array";
    for(i=0;i<b;i++){
        cin>>a[i];
    }
    insertion_sort(a,b);

    for(i=0;i<b;i++){
        cout<<a[i]<<" ";
    }
}
