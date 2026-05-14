/**
 * Problem: 0121. Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * Language: cpp
 * Synced: 2026-05-14T18:00:58.354Z
 */
/* LeetSync Update Marker: submission:1861251516 */
#define ll int 
class Solution {
public:
    int maxProfit(vector<int>& p) {
        ll min_price = p[0] ;
        ll profit = 0 ; 
        for(ll i = 0 ; i < p.size() ; i++) {
            if(p[i] < min_price) min_price = p[i] ;

            else {
                if(p[i] - min_price > profit) {
                    profit = p[i] - min_price ; 
                }
            }
        }
        return profit ;
    }
};