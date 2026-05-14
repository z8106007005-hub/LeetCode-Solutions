/**
 * Problem: 3783. Mirror Distance of an Integer
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/mirror-distance-of-an-integer/
 * Language: cpp
 * Synced: 2026-05-14T18:08:45.777Z
 */
/* LeetSync Update Marker: submission:1981887232 */
class Solution {
public:
    int mirrorDistance(int n) {
        int maxi = 0 ; 
        int temp = n ; 
        while(temp > 0) {
            maxi = maxi * 10 + temp % 10 ;
            temp /= 10 ;
        }
        return abs(maxi - n) ;
    }
};