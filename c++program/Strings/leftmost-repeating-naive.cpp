#include<iostream>
#include<string>

using namespace std;

int leftmost(string &str){
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i] == str[j]){
                return i;
            }
        }
    }
    return -1;
}

int main(){
    string str;
    cout<<"enter the string ";
    cin>>str;
    int result = leftmost(str);
    cout<<"left most index: "<<result;
}