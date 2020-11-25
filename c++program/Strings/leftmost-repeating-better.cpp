#include<iostream>
#include<string>

using namespace std;

const int CHAR = 256;
int leftmost(string &str){
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res=-1;
    for(int i=str.length()-1;i>=0;i--){
        if(visited[str[i]])
            res = i;
        else
            visited[str[i]] = true;
    }
    return res;
}

int main(){
    string str;
    cout<<"enter a string ";
    cin>>str;
    int result=leftmost(str);
    cout<<"position of element: "<<result;
    return 0;
}