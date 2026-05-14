/**
 * Problem: 3890. Integers With Multiple Sum of Two Cubes
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/integers-with-multiple-sum-of-two-cubes/
 * Language: cpp
 * Synced: 2026-05-14T18:08:12.113Z
 */
/* LeetSync Update Marker: submission:1969149358 */
class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        // long long maxi = 0 ;
        // int i = 0 , j = 0 ;
        // n = n * 1LL ;
        // while(maxi <= n) {
        //     // ll temp = i * i * i + j * j * j ;
        //     // maxi = temp ; 
        //     // if(maxi == n) return {i , j} ;
        //     j = 0 ;
        //     while(maxi <= n) {
        //         long long temp = (i * i * i + j * j * j) * 1LL ;
        //         if(n == temp) return {i , j} ;
        //         maxi = temp ;
        //         j++ ;
        //     }
        //     i++ ;
        // }

        unordered_map<int , int> freq ;
        
        int maxi = cbrt(n) ;
        for(int i = 1 ; i <= maxi ; i++) {
            long long mini = 1LL * i * i * i ;
            for(int j = i ; j <= maxi ; j++) {
                long long mini1 = 1LL * j * j * j ;
                long long sum = mini1 + mini ;
                if(sum > n) break ; 
                freq[sum]++ ;
            }
        }
        vector<int> ans ;
        for(auto &x : freq) {
            if(x.second >= 2)
                ans.push_back(x.first) ;
        }
        sort(ans.begin() , ans.end()) ;
        return ans ;
    }
};