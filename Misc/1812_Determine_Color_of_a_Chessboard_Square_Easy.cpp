/**
 * Problem: 1812. Determine Color of a Chessboard Square
 * Difficulty: Easy
 * URL: https://leetcode.com/problems/determine-color-of-a-chessboard-square/
 * Language: cpp
 * Synced: 2026-05-14T18:25:57.977Z
 */
/* LeetSync Update Marker: submission:1896772468 */
class Solution {
public:
    bool squareIsWhite(string s) {
        char st1 = s[0] ;
        char st2 = s[1] ; 


        if(st1 == 'a' || st1 == 'c' || st1 == 'e' || st1 == 'g') {
            if(st2 == '1' || st2 == '3' || st2 == '5' || st2 == '7') return false ;
            else return true ;
        }
        else if(st1 == 'b' || st1 == 'd' || st1 == 'f' || st1 == 'h') {
            if(st2 == '1' || st2 == '3' || st2 == '5' || st2 == '7') return true ;
            else return false ;
        }
        return false ;
    }
};