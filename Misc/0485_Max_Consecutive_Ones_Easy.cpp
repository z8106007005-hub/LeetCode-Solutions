/**
 * Problem: 0485. Max Consecutive Ones
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/max-consecutive-ones/
 * Language: cpp
 * Synced: 2026-05-14T18:10:02.313Z
 */
/* LeetSync Update Marker: submission:2000139181 */
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size() ;
        int main_sum = 0 ; 
        int temp_sum = 0 ; 
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] == 1) {
                temp_sum++ ;
            }
            else {
                temp_sum = 0 ;
            }
            main_sum = max(main_sum , temp_sum) ;
        }
        return main_sum ;
    }
};