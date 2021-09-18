#include<bits/stdc++.h>

using namespace std;

void merge(int *arr1,int *arr2,int n,int m){
    int i, j, gap = ceil(n + m/2);
    while(gap>0){
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;i < n && j < m;i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
        gap = gap/2;
    }
}

int main(){
    int a[]={1,4,7,8,10};
    int b[]={2,3,9};
    int n = sizeof(a) / sizeof(int);
    int m = sizeof(b) / sizeof(int);
    merge(a,b,n,m);
    cout<<"array 1 after merging: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<"array 2 after merging: ";
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}