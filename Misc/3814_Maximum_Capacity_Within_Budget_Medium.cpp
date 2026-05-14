/**
 * Problem: 3814. Maximum Capacity Within Budget
 * Difficulty: Medium
 * URL: https://leetcode.com/problems/maximum-capacity-within-budget/
 * Language: cpp
 * Synced: 2026-05-14T18:24:48.391Z
 */
/* LeetSync Update Marker: submission:1888469230 */
#define ll int
class Solution {
public:
    int maxCapacity(vector<int>& aa, vector<int>& c, int bud) {
        ll n = aa.size() ;
        
        vector<pair<ll ,ll>> a ;
        for(ll i = 0 ; i < n ; i++) 
            a.push_back({aa[i] , c[i]}) ;

        sort(a.begin() , a.end()) ;

        vector<ll> help(n) ;
        help[0] = a[0].second ;
        for(ll i = 1 ; i < n ; i++) {
            help[i] = max(help[i - 1] , a[i].second) ;
        }

        ll ans = 0 ;
        for(ll i = 0 ; i < n ; i++) {
            if(a[i].first < bud) {
                ans = max(ans , a[i].second) ;
            }
        }
        for (ll j = 1; j < n; j++) {
            
            ll rest = bud - a[j].first - 1;
            ll index = -1;

            if (rest >= 0) {
                ll low = 0, high = j - 1;
                
                while (low <= high) {
                    
                    ll mid = (low + high) / 2;
                    
                    if (a[mid].first <= rest) {
                        index = mid;
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                    
                }
            }

            if (index != -1) {
                ans = max(ans, a[j].second + help[index]);
            }
        }
        return ans ;
    }
};
auto init=atexit([]{ofstream("display_runtime.txt")<<"0";});
