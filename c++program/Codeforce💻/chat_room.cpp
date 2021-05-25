//58A - Chat room
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    string k = "hello";
    int j=0;
    int count=0;//count of word hello
    for(int i=0;i<s.length();i++){
        if(s[i] == k[j]){
            j++;
            count++;
            if(count == 5){//means all characters are prenent in order
                break;//come out of the loop
            }            
        }    
    }
    if(count == 5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}