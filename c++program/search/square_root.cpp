#include<iostream>

using namespace std;

int squareRoot(int n){
    int low = 1,high = n,ans = 0;
    while(low<= high){
        int mid = (low + high) / 2;
        int msq = mid*mid;
        if(msq == n){
            return mid;
        }else if(msq > n){
            high = mid -1;
        }else{
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter any number : ";
    cin>>n;
    int ans = squareRoot(n);
    cout<<"ans : "<<ans;
    return 0;
}