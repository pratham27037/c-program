/* Given an array of integers, and an integer  ‘K’ , 
find the count of pairs of elements in the array whose sum is equal to 'K'.*/


#include<iostream>
using namespace std;


int main()
 {
	int t;
	cin>>t;
	while(t){
	    int n,k,i,j;
	    cin>>n>>k;
	    int array[n],count=0;
	    for(i=0;i<n;i++){
	       cin>>array[i]; 
	    }
	    for(i=0;i<n;i++){
	        for(j=i+1;j<n;j++){
	            if(array[i]+array[j]==k){
	                count++;
	            }
	        }
	    }
	    cout<<count<<"\n";
	    t--;
	    
	}
	return 0;
}