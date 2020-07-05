#include<iostream>
#include<string>

using namespace std;

int main(){
    int i,j=0,count = 0;
    string enter;
    cout<<"enter any string \n";
    getline(cin,enter);
    cout<<"entered string is \n"<<enter<<"\n";
    int k = enter.length();
    while(j < k){
        for(i=0; i< k ; i++){
            if(enter[j] == enter[i]){
                count++;
                // enter.erase(enter.begin() + i-1);
            }
        }
        cout<<"no of times "<<enter[j]<<"is present in string is "<<count<<"\n";
        count = 0;
        j++;
    }
    return 0;
}