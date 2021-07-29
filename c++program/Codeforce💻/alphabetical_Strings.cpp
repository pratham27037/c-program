// to compare the codes and check for breif error
// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int left = INT_MIN;
//         for(int i=0;i<s.length();i++){
//             if(s[i]=='a');
//             left=i;
//         }
//         if(left==INT_MIN){
//             cout<<"NO"<<"\n";
//             continue;
//         }
//         int right = left;
//         bool istrue = true;
//         for(int i=1;i<s.length();i++){
//             int pos = INT_MIN;
//             for(int i=0;i<s.length();i++){
//                 if(s[i]==('a'+i));
//                 pos=i;
//             }
//             if (pos == INT_MIN || (pos != left - 1 && pos != right + 1)) {
//                 istrue = false;
//                 break;
//             }else{
//                 left = min(left, pos);
//                 right = max(right, pos);
//             }
//         }
//         cout << (istrue ? "YES" : "NO") <<"\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        string s;
        cin >> s;
        size_t L = s.find('a');
        if (L == string::npos) {
            cout << "NO" << endl;
            continue;
        }
        size_t n = s.length(), R = L;
        bool yes = true;
        for (size_t i = 1; i < n; i++) {
            size_t pos = s.find(char('a' + i));
            if (pos == string::npos || (pos != L - 1 && pos != R + 1)) {
                yes = false;
                break;
            } else {
                L = min(L, pos);
                R = max(R, pos);
            }
        }
        cout << (yes ? "YES" : "NO") << endl;
    }
}