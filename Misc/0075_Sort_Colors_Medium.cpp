/**
 * Problem: 0075. Sort Colors
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/sort-colors/
 * Language: cpp
 * Synced: 2026-05-14T18:01:10.917Z
 */
/* LeetSync Update Marker: submission:1861267538 */
#define ll int
class Solution {
public:
    void sortColors(vector<int>& n) {
        for(ll i = 0 ; i < n.size() - 1 ; i++) {
            for(ll j = i ; j < n.size() ; j++){
                if(n[i] > n[j]) swap(n[i] , n[j]) ;
            }
        }
    }
};/*
 * ------------------------------------------------------------
 * LeetSync appended newer accepted solution
 * LeetSync Update Marker: submission:2001392929
 * Appended At: 2026-05-14T18:28:35.658Z
 * ------------------------------------------------------------
 *//**
 * Problem: 0075. Sort Colors
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/sort-colors/
 * Language: cpp
 * Synced: 2026-05-14T18:28:35.194Z
 */
/* LeetSync Update Marker: submission:2001392929 */
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0 ; 
        int n = nums.size() ; 

        for(i = 0 ; i < n ; i++) {
            for(int j = i + 1 ; j < n ; j++) {
                if(nums[i] > nums[j]) {
                    swap(nums[i] , nums[j]) ;
                }
            }
        }
    }
};