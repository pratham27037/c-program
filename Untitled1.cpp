//bubble sort
#include<iostream>


using namespace std;

void bubble_sort(int a[], int n){
	int round,i,temp,flag;
	for(round=1;round<=n-1;round++){
		flag=0;
		for(i=0;i<=n-1-round;i++){
			if(a[i]>a[i+1]){
				flag=1;
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
		if(flag==1){
		return;
	}
	}
}

int main(){
	int k,i;
	cout<<"enter size of array";
	cin>>k;
	int a[k];
	cout<<"enter elements in array";
	for(i=0;i<k;i++){
		cin>>a[i];
	}
	bubble_sort(a,k);
	for(i=0;i<=k-1;i++){
		cout<<a[i]<<" ";
	}
	
}

