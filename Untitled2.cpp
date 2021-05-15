//selection sort
#include<iostream>

using namespace std;

int min(int a[],int k,int n){
	int j,loc,min;
	min=a[k];
	loc=k;
	for(j=k+1;j<=n-1;j++){
		if(min>a[j]){
			min=a[j];
			loc=j;
		}
	}
	return(loc);
}
int main(){
	int b;
	cout<<"enter size of array";
	cin>>b;
	int a[b],k,loc,temp;
	for(k=0;k<=b-1;k++){
		cin>>a[k];
	}
	for(k=0;k<=b-2;k++){
		loc=min(a,k,b);
		temp = a[k];
		a[k]=a[loc];
		a[loc]=temp;
	}
	for(k=0;k<=b-1;k++){
		cout<<a[k]<<" "
	}
}
