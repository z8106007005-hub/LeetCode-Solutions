/**
 * Problem: 3896. Minimum Operations to Transform Array into Alternating Prime
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/minimum-operations-to-transform-array-into-alternating-prime/
 * Language: cpp
 * Synced: 2026-05-14T18:08:40.805Z
 */
/* LeetSync Update Marker: submission:1976070136 */
class Solution {
public:
    bool isPrime(int x) {
        if(x <= 1) return false ;
        if(x == 2) return true ;
        if(x % 2 == 0) {
            return false ;
        }

        for(int i = 3 ; i * i <= x ; i += 2) {
            if(x % i == 0) return false ;
        }

        return true ;
    }
    int minOperations(vector<int>& nums) {
        int n = nums.size() ;

        int maxi = 0 ; 
        for(int i = 0 ; i < n ; i++) {
            if(i % 2 == 0) {
                while(!isPrime(nums[i])) {
                    nums[i]++ ; 
                    maxi++ ;
                }
            }
            if(i % 2 != 0) {
                if(isPrime(nums[i])) {
                    if(nums[i] == 2) {
                        nums[i] += 2 ;
                        maxi = maxi + 2 ;
                    }
                    else {
                        nums[i]++ ;
                        maxi++ ;
                    }
                }
            }
        }
        return maxi ;
    }
};