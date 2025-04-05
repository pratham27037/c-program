// link to problem: https://leetcode.com/problems/contains-duplicate/
// Given an integer array nums, return true if any value appears at least twice in the array, 
// and return false if every element is distinct.
// Example 1:
// Input: nums = [1,2,3,1]
// Output: true
// Example 2:
// Input: nums = [1,2,3,4]
// Output: false
// Example 3:
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            unordered_set<int> st;
            for(int i=0;i<nums.size();i++){
                if(st.find(nums[i])!=st.end()){
                    return true;
                }
                st.insert(nums[i]);
            }
            return false;
        }
};

int main() {
    Solution s;
    vector<int> nums;
    nums.assign({1, 2, 3, 1});
    cout << s.containsDuplicate(nums) << endl; // Output: true

    nums.assign({1, 2, 3, 4});
    cout << s.containsDuplicate(nums) << endl; // Output: false

    nums.assign({1, 1, 1, 3, 3, 4, 3, 2, 4, 2});
    cout << s.containsDuplicate(nums) << endl; // Output: true
    return 0;
}

// Time complexity: O(n)
// Space complexity: O(n)
// The time complexity of this solution is O(n) because we are iterating through the array once, 
// and the space complexity is O(n) because we are using a hash set to store the elements of the array. 
// The hash set allows us to check for duplicates in constant time on average.