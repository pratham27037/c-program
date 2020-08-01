#include<iostream>
#include<string>

using namespace std;

int main(){
    string k,l;
    int i=0;
    cout<<"enter the string you want to reverse \n";
    cin>>k;
    int m = k.size();
    cout<<m;
    while(i< m ){
        l[i] = k[m-i];
        i++;
    }
    cout<<"reversed string \n";
    cout<<l;
}