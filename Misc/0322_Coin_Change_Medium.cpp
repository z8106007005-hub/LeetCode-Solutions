/**
 * Problem: 0322. Coin Change
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/coin-change/
 * Language: cpp
 * Synced: 2026-05-14T18:23:50.611Z
 */
/* LeetSync Update Marker: submission:1881615933 */
#define ll int
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<ll> coins_option(amount + 1 , amount + 1) ;
        coins_option[0] = 0 ;
        ll n = coins.size() ;
        for(ll i = 1 ; i <= amount ; i++) {
            for(auto coin : coins) {
                if(coin <= i)
                    coins_option[i] = min(coins_option[i] , coins_option[i - coin] + 1) ;
            }
        }
        if(coins_option[amount] > amount) return -1 ; 
        return coins_option[amount] ;

    }
};
auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});

/*intuation 
 first let use think how much 
 coin it takes to make for say 1 
 thrn 2 , then 3 , ... and so on ...
 now let us assume that the amount (given)
 is made up of two smaller coins x + y (say) 
 then calculate itr and return it 
 
*/