//palindrome of a string
#include<iostream>
#include<string>

using namespace std;

bool palindrome(string &str){
    int begin=0;
    int end = str.length()-1;
    while(begin<end){
        if(str[begin] != str[end]){
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int main(){
    string str;
    cout<<"enter the string :";
    cin>>str;
    bool ispal = palindrome(str);
    if(ispal){
        cout<<"String is palindrome";
    }else{
        cout<<"string is not palindrome";
    }
    return 0;
}