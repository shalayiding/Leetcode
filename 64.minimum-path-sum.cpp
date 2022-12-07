/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 *
 * https://leetcode.com/problems/minimum-path-sum/description/
 *
 * algorithms
 * Medium (60.73%)
 * Likes:    9083
 * Dislikes: 117
 * Total Accepted:    821.1K
 * Total Submissions: 1.4M
 * Testcase Example:  '[[1,3,1],[1,5,1],[4,2,1]]'
 *
 * Given a m x n grid filled with non-negative numbers, find a path from top
 * left to bottom right, which minimizes the sum of all numbers along its
 * path.
 * 
 * Note: You can only move either down or right at any point in time.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: grid = [[1,3,1],[1,5,1],[4,2,1]]
 * Output: 7
 * Explanation: Because the path 1 → 3 → 1 → 1 → 1 minimizes the sum.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: grid = [[1,2,3],[4,5,6]]
 * Output: 12
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * m == grid.length
 * n == grid[i].length
 * 1 <= m, n <= 200
 * 0 <= grid[i][j] <= 100
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int> (n,0));
        dp[0][0] = grid[0][0];
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if (i == 0 && j >0){
                    dp [i][j] = dp[i][j-1]+grid[i][j];
                }
                if (j ==0 && i >0){
                    dp [i][j] = dp[i-1][j] + grid[i][j];
                }
                if (i!= 0 && j!=0){
                    dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + grid[i][j];

                }




            }
        }    
    
        return dp[m-1][n-1];
    
    }





};
// @lc code=end

