/**
 * Problem: 2553. Separate the Digits in an Array
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/separate-the-digits-in-an-array/
 * Language: cpp
 * Synced: 2026-05-14T18:09:52.743Z
 */
/* LeetSync Update Marker: submission:2000119373 */
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> ans ; 
        for(int i = 0 ; i < n ; i++) {
            vector<int> b ; 
            while(nums[i] != 0) {
                int x = nums[i] % 10 ; 
                b.push_back(x) ;
                nums[i] /= 10 ;
            }
            reverse(b.begin() , b.end()) ;
            for(auto x : b) {
                ans.push_back(x) ;
            }
        }
        return ans ;
    }
};