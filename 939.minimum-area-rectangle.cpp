/*
 * @lc app=leetcode id=939 lang=cpp
 *
 * [939] Minimum Area Rectangle
 *
 * https://leetcode.com/problems/minimum-area-rectangle/description/
 *
 * algorithms
 * Medium (53.02%)
 * Likes:    1670
 * Dislikes: 256
 * Total Accepted:    118.4K
 * Total Submissions: 223.3K
 * Testcase Example:  '[[1,1],[1,3],[3,1],[3,3],[2,2]]'
 *
 * You are given an array of points in the X-Y plane points where points[i] =
 * [xi, yi].
 * 
 * Return the minimum area of a rectangle formed from these points, with sides
 * parallel to the X and Y axes. If there is not any such rectangle, return
 * 0.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: points = [[1,1],[1,3],[3,1],[3,3],[2,2]]
 * Output: 4
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: points = [[1,1],[1,3],[3,1],[3,3],[4,1],[4,3]]
 * Output: 2
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= points.length <= 500
 * points[i].length == 2
 * 0 <= xi, yi <= 4 * 10^4
 * All the given points are unique.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        if (points.size()<4)
            return 0;
        
        do {
            vector<vector<int>> m (points.begin(),points.begin()+4);
            isRec(m);
        }while(next_permutation(points.begin(),points.end()));
    
        return 0;
    
    
    }

    static bool xcorr(vector<int>& a,vector<int>& b)
    {
        return a[0] < b[0];
    }
    static bool ycorr(vector<int>& a,vector<int>& b)
    {
        return a[1] < b[1];
    }

    int isRec(vector<vector<int>> points){
        sort(points.begin(),points.end(),xcorr);
        
        int ydiff = points[0][0] == points[1][0] ?  abs (points[0][1] - points[1][1]) : -1;
        sort(points.begin(),points.end(),ycorr);
        int xdiff = points[0][1] == points[1][1] ? abs(points[0][0] - points[1][1])

        return 0;

    }




/*

    

*/







};
// @lc code=end

