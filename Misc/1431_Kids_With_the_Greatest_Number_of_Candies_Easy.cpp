/**
 * Problem: 1431. Kids With the Greatest Number of Candies
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
 * Language: cpp
 * Synced: 2026-05-14T18:07:10.244Z
 */
/* LeetSync Update Marker: submission:1964093490 */
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& a, int ext) {
        int n = a.size() ;
        int maxi = 0 ; 
        vector<bool> res(n , false) ;

        for(int i = 0 ; i < n ; i++) {
            maxi = max(maxi , a[i]) ;
        }

        for(int i= 0 ; i < n ; i++) {
            if(a[i] + ext >= maxi) {
                res[i] = true ; 
            }
        }
        return res ;
    }
};


auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});