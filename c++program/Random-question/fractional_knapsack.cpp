#include<bits/stdc++.h>

using namespace std;

struct Item{
    int weight,value;
    Item(int weight,int value){
        this->weight=weight;
        this->value=value;
    }
};

bool check(Item a,Item b){
    double r1 = (double)a.value/(double)a.weight;
    double r2 = (double)b.value/(double)b.weight;
    return r1>r2;
}

double fractionalKnapsack(int k,Item arr[],int n){
    sort(arr,arr+n,check);
    int currWeight = 0;
    double finalans= 0.0;

    for(int i=0;i<n;i++){
        if(currWeight+arr[i].weight <= k){
            currWeight += arr[i].weight;
            finalans += arr[i].value;
        }else{
            int remaining = k - currWeight;
            finalans += arr[i].value*((double)remaining/(double)arr[i].weight);
            break;
        }
    }
    return finalans;
}

int main(){
    int k = 50; //    Weight of knapsack
    Item arr[] = { { 10, 60 }, { 20, 100 }, { 30, 120 } };
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(k, arr, n);
    return 0;
}