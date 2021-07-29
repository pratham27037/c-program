#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        long long n, k;
        cin>>n>>k;
        long long temp = pow(2, n);
        long long ans = min(2 * k, temp) * (temp - 1);
        cout<<ans<<"\n";
    }
    return 0;
}

// int main() {
//     int T;
//     cin>>T;
//     while(T--){
//         int N,K;
//         cin>>N>>K;
//         long long int size = pow(2,N);
//         long long int sum = 0;
//         long long int j = size - 2;
//         for(int i=1;i<=K;i++){
//             sum += j ^ i;
//             j--;
//         }
//         cout<<2*sum<<"\n";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//     int T;
//     cin>>T;
//     while(T--){
//         int N,K;
//         cin>>N>>K;
//         long long int size = pow(2,N);
//         long long int arr[size];
//         for(int i=0;i<size;i++){
//             arr[i]=i;
//         }
//         long long int i = 1;
//         long long int j = size-2 ;
//         while(K--){
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j]=temp;
//             i++;
//             j--;
//         }
//         long long int sum = 0;
//         for(int i=0;i<size;i++){
//             sum += (arr[i] ^ i);
//         }
//         cout<<sum<<"\n";
//     }
//     return 0;
// }