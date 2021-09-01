//using memoizaton
#include<bits/stdc++.h>

using namespace std;

const int maximum = 1000;

int lcs(string s1,string s2,int m, int n,int memo[][maximum]){

    if(m==0 || n==0){
        return 0;
    }
    if (memo[m - 1][n - 1] != -1){
        return memo[m - 1][n - 1];
    }
    if(s1[m-1] == s2[n-1]){
        memo[m - 1][n - 1] = 1 + lcs(s1,s2,m-1,n-1,memo);
        return memo[m-1][n-1];
    }else{
        memo[m - 1][n - 1] = max(lcs(s1,s2,m-1,n,memo),lcs(s1,s2,m,n-1,memo));
        return memo[m-1][n-1];
    }
}

int main(){
    // string s1 = "AXYZ";
    // string s2 = "BAZ";
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    int m = s1.length();
    int n = s2.length();
    int memo[m][maximum];
    // assign -1 to all positions
    memset(memo, -1, sizeof(memo));

    cout<<lcs(s1,s2,m,n,memo);
    return 0;
}