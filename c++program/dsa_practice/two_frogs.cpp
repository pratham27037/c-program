#include <iostream>

using namespace std;

int getMaxJump(vector<int>& blocks, int n){
    int maxdiff = 0;
    int l = 0, r=0;
    while(r<n){
        
    }
            

}

int main(){
    int n = 0;
    cout<<"Enter the number of Blocks: ";
    cin>>n;
    vector<int> blocks(n);
    cout<<"Enter the height of each block: ";
    for(int i = 0; i < n; i++){
        cin>>blocks[i];
    }

    int ans  = getMaxJump(blocks, n);
}