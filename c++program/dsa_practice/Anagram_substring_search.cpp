//link to problem: https://www.naukri.com/code360/problems/anagram-substring-search_873350?leftPanelTabValue=PROBLEM
// Given a string str and a pattern ptn, find all the start indices of ptn's anagrams in str.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
// typically using all the original letters exactly once.
// For example, "anagram" is an anagram of "nagaram".
// Example 1:
// Input: str = "cbaebabacd", ptn = "abc"
// Output: [0, 6]
// Explanation: The substring with start index = 0 is "cba", which is an anagram of "abc".
// The substring with start index = 6 is "bac", which is an anagram of "abc".
// The substring with start index = 1 is "ba", which is not an anagram of "abc".
// The substring with start index = 2 is "ba", which is not an anagram of "abc".
// The substring with start index = 3 is "ba", which is not an anagram of "abc".
// The substring with start index = 4 is "ba", which is not an anagram of "abc".    
// The substring with start index = 5 is "ba", which is not an anagram of "abc".


#include <iostream>
#include <vector>
#include <string>

using namespace std;
// Function to check if two frequency arrays are equal
// This function takes two frequency arrays as input and checks if they are equal
// It returns true if they are equal, false otherwise
bool checkequal(vector<int> cnt1,vector<int> cnt2){
    int n = cnt1.size();
    for(int i=0;i<n;i++){
        
        if(cnt1[i]!=cnt2[i]){
            return false;
        }
    }
    return true;
}

vector<int> findAnagramsIndices(string str, string ptn, int n, int m)
{
    vector<int> ans;
    vector<int> cnt(26,0);
    vector<int> window(26,0);
    for(int i=0;i<m;i++){
        cnt[ptn[i]-'A']++;
        window[str[i]-'A']++;
    }
    if(checkequal(cnt,window)){  
        ans.push_back(0);
    }
    
    for(int i=m;i<n;i++){
        window[str[i]-'A']++;
        window[str[i-m]-'A']--;
        if(checkequal(cnt,window)){  
            ans.push_back(i-m+1);
        }
    }
    return ans;
}


//time complexity: O(n)
//space complexity: O(1)
// The time complexity of this solution is O(n) because we are iterating through the string once,
// and the space complexity is O(1) because we are using a fixed-size array of size 26 to store the frequency of characters.
// This is a constant size array, so the space complexity is O(1).
// The checkequal function takes O(1) time because it is iterating through a fixed-size array of size 26.
// The overall time complexity of the solution is O(n) and the space complexity is O(1).
// The space complexity is O(1) because we are using a fixed-size array of size 26 to store the frequency of characters.
int main() {
    string str = "BACDGABCD";
    string ptn = "ABCD";
    int n = str.length();
    int m = ptn.length();
    vector<int> ans = findAnagramsIndices(str, ptn, n, m);
    
    cout << "The start indices of ptn's anagrams in str are: ";
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}