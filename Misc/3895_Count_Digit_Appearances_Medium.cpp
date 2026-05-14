/**
 * Problem: 3895. Count Digit Appearances
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/count-digit-appearances/
 * Language: cpp
 * Synced: 2026-05-14T18:08:36.515Z
 */
/* LeetSync Update Marker: submission:1976061217 */
class Solution {
public:
    int countDigitOccurrences(vector<int>& a , int d) {
        int maxi = 0 ;
        for(int i = 0 ; i < a.size() ; i++) {
            int x = a[i] ; 
            while(x > 0) {
                int f = x % 10 ;
                if(d == f) maxi++ ;
                x /= 10 ;
            }
        }
        return maxi ;
    }
};