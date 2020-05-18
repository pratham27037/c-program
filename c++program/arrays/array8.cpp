#include <bits/stdc++.h>
using namespace std;
int main()
 {
	int testcase;
    cout<<"enter the test cases:\n";
	cin>>testcase;
	while(testcase>0){
	    int k,l,i,j;
	    unordered_set<int> s;
        cout<<"enter the size of the arrays:\n";
	    cin>>k>>l;
	    
	    int array1[k],array2[l];
	    cout<<"enter element of first array:\n";
	    for(i=0;i<k;i++){
	        cin>>array1[i];
	        s.insert(array1[i]);
	    }
        cout<<"enter element of second array:\n";
	    for(j=0;j<l;j++){
	        cin>>array2[i];
	        s.insert(array2[i]);
	    }
        cout<<"total elements in the union of the 2 arrays is/are:\n";
	    cout<<s.size()<<"\n";
	    testcase--;
	}
	return 0;
}