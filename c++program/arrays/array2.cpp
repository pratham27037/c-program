#include<iostream>
using namespace std;

int main(){
    int n,s,i;
    bool flag=0;
    cout<<"enter the size of array";
    cin>>s;
    int array[s];
    cout<<"enter elements in array:\n";
    for(i=0;i<s;i++){
        cin>>array[i];
    }
    cout<<"enter the no. to be searched\n";
    cin>>n;
    for(i=0;i<s;i++){
        if(array[i]==n){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}