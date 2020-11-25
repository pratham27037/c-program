#include<iostream>
#include<string>

using namespace std;

const int CHAR = 256;
int nonrep(string &str){
    int count[CHAR] ={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(count[str[i]]==1)
            return i;
    }
    return -1;
}

int main(){
    string str;
    cout<<"enter a string ";
    cin>>str;
    int result=nonrep(str);
    cout<<"position of element: "<<result;
    return 0;
}