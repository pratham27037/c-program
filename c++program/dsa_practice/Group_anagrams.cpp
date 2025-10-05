//link to problem: https://leetcode.com/problems/group-anagrams/description/
// Given an array of strings strs, group the anagrams together. You can return the answer in any order.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
// typically using all the original letters exactly once.
// Example 1:
// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
// Explanation: The order of output does not matter.
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
// Function to group anagrams
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> mp;
    for (const auto& s : strs) {
        vector<int> count(26,0);
        for(char c:s){
            count[c-'a']++;
        }
        string key = to_string(count[0]);
        for(int i=1;i<26;i++){
            key += ','+to_string(count[i]);
        }
        mp[key].push_back(s);
    }
    vector<vector<string>> ans;
    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
}

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result = groupAnagrams(strs);
    
    for (const auto& group:result) {
        cout << "[";
        for (const auto& str:group) {
            cout << str << " ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}
// Time complexity: O(n*k) where n is the number of strings and k is the maximum length of a string
// Space complexity: O(n*k) for the hash map to store the grouped anagrams
// The time complexity of this solution is O(n*k) because we are iterating through each string in the input array
// and for each string, we are iterating through its characters to create a frequency count.
// The space complexity is O(n*k) because we are using a hash map to store the grouped anagrams,
// where n is the number of strings and k is the maximum length of a string.
// The hash map stores the frequency count as a string key and the corresponding anagrams as a vector of strings.
// The overall complexity is efficient for the problem at hand, as it allows us to group anagrams in linear time relative to the input size.