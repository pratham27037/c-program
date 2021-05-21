//96A - Football
#include<bits/stdc++.h>

using namespace std;

string checkIT(string &s){
    int count=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i] == s[i+1]){
            count++;
            if(count == 6){
            return "YES";
            break;
        }
        }
        else{
            count=0;
        }
    }
    return "NO";
}

int main(){
    string s;
    cin>>s;
    string result = checkIT(s);
    cout<<result;    
    return 0;
}