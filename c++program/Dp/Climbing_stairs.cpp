#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
void getans(int n,int &cnt){
    if(n==0){ 
        cnt++;
        return;
    }
    if (n >= 1) getans(n - 1, cnt);
    if (n >= 2) getans(n - 2, cnt);
}
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        int cnt = 0;
        getans(n,cnt);
        return cnt;
    }
};

int main(int argc, char const *argv[])
{
    Solution Solution;
    int ans = Solution.climbStairs(3);
    cout<<ans<<" ";
    return 0;
}