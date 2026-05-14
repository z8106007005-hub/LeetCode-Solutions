/**
 * Problem: 0031. Next Permutation
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/next-permutation/
 * Language: cpp
 * Synced: 2026-05-14T18:29:35.728Z
 */
/* LeetSync Update Marker: submission:2002202807 */
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() ;

        int index = -1 ; 
// right se searching iss liye karna hai kyuki hamlog ko smallest possible increase chahiye 
        for(int i = n - 2 ; i >= 0 ; i--) {
            if(nums[i] < nums[i + 1]) {
                index = i ; 
                break ;
            }
        }
// hamlog fir se right se traverse karenge kyuki hamko right se index elent se smallest large number chahiye 
        if(index != -1) {
            for(int i = n - 1 ; i > index ; i--) {
                if(nums[i] > nums[index]) {
                    swap(nums[i] , nums[index]) ;
                    break ;
                }
            }
        }
// last me index wale point se last tak reverse kar denge 
        reverse(nums.begin() + index + 1 , nums.end()) ;
    }
};