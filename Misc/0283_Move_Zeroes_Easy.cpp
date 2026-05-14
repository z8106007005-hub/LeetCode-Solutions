/**
 * Problem: 0283. Move Zeroes
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/move-zeroes/
 * Language: cpp
 * Synced: 2026-05-14T18:09:49.928Z
 */
/* LeetSync Update Marker: submission:2000000380 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // basic baccha wala approch 
        int n = nums.size() ;
        vector<int> a(n , 0) ;
        int j = 0 ;  
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] != 0) {
                a[j] = nums[i] ; 
                j++ ;
            }
        }
        nums = a ; 
    }
};