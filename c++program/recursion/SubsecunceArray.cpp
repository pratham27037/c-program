//All subsequnce of array
#include <iostream>
#include <vector>
#include <algorithm> 
#include <iterator>

using namespace std;

void checksubsequences(int idx , int n,int arr[],vector<int> &ans){
    if(idx==n){
        for(auto t:ans){
            cout<<t<<" ";
        }
        if (ans.empty()) {
            cout << "{}\n"; // Print empty set if no elements in ans
        }
        cout << endl;
        return;
    }

    ans.push_back(arr[idx]);
    checksubsequences(idx+1,3,arr,ans);
    ans.pop_back();
    checksubsequences(idx+1,3,arr,ans);
}

int main(){
    int arr[] = {3,1,2};
    vector<int> ans;
    checksubsequences(0,3,arr,ans);
    return 1;
}

