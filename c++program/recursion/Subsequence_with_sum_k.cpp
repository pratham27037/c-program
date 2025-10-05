#include<iostream>
#include<vector>

using namespace std;
int checksubsequences(int idx, int n, int k,int sum,int &cnt, int arr[], vector<int> &ans) {
    if(idx == n) {
        if(sum==k){
            // for(auto a:ans){
            //     cout << a << " ";
            // }
            cnt = cnt +1;// Found a subsequence with sum k
        }
        return cnt; // Return the count of subsequences found
    }
    ans.push_back(arr[idx]);
    sum+= arr[idx];
    checksubsequences(idx + 1, n, k, sum,cnt, arr, ans);
    sum-= arr[idx]; // Backtrack to remove the last added element
    ans.pop_back();
    checksubsequences(idx + 1, n, k, sum ,cnt,arr, ans);
    return cnt;
}

int main(){
    int arr[] = {1,2,1};
    int k = 2; // Target sum
    vector<int> ans;
    int sum = 0;
    int cnt = 0;
    cnt = checksubsequences(0,3,k,sum,cnt,arr,ans);
    cout<<cnt<<" ";
    return 1;
}