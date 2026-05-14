/**
 * Problem: 3780. Maximum Sum of Three Numbers Divisible by Three
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/maximum-sum-of-three-numbers-divisible-by-three/
 * Language: cpp
 * Synced: 2026-05-14T18:00:49.341Z
 */
/* LeetSync Update Marker: submission:1860783853 */
#define ll int 
class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<ll> a1 , a2 , a3 ; 
        for(ll i = 0 ; i < nums.size() ; i++) {
            if(nums[i] % 3 == 0 ) a1.push_back(nums[i]) ; 
            else if(nums[i] % 3 == 1) a2.push_back(nums[i]) ; 
            else a3.push_back(nums[i]) ;
        }

        sort(a1.rbegin() , a1.rend()) ;
        sort(a2.rbegin() , a2.rend()) ;
        sort(a3.rbegin() , a3.rend()) ;
        
        ll num = 0 ;
        
        if(a1.size() >= 3) 
            num = max(num , a1[0] + a1[1] + a1[2]) ;
        
        if(a2.size() >= 3) 
            num = max(num , a2[0] + a2[1] + a2[2]) ;

        if(a3.size() >= 3) 
            num = max(num , a3[0] + a3[1] + a3[2]) ;

        if(!a1.empty() && !a2.empty() && !a3.empty())
            num = max(num , a1[0] + a2[0] + a3[0]) ;

        return num ;
        
    }
};