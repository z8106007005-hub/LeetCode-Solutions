/**
 * Problem: 0128. Longest Consecutive Sequence
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/longest-consecutive-sequence/
 * Language: cpp
 * Synced: 2026-05-14T18:30:00.537Z
 */
/* LeetSync Update Marker: submission:2002259665 */
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0 ; 
        sort(nums.begin() , nums.end()) ;
        int maxi = 1 ; 
        int mini = 1 ; 

        for(int i = 0 ; i < nums.size() - 1 ; i++) {

            if(!(nums[i] == nums[i + 1])){
                if(nums[i + 1] - nums[i] == 1) maxi++ ; 

                else maxi = 1 ; 
            }

            mini = max(mini , maxi) ;
        }
        return mini ;
    }
};