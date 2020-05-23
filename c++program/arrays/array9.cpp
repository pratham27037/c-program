/* Given an array C of size N-1 and given 
that there are numbers from 1 to N with one element missing, the missing number is to be found.
*/

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t){
	    int size,i,k;
	    cin>>size;
	    int array[size],sum=0;
	    for(i=0;i<size-1;i++){
	        cin>>array[i];
	        sum = sum + array[i];
	    }
	    k=size*(size+1)/2;
	    cout<<k-sum<<"\n";
	    t--;
	}
	return 0;
}