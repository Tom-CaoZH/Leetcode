/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n, 0));
        int c = n / 2;
        int i = 0, j = 0; // represents the x and y.
        int startx = 0, starty = 0;
        int count = 1;
        int size = n;
        while(c > 0) {
            for(j = starty;j < size - 1; ++j) {
                result[startx][j] = count++;
            }

            for(i = startx;i < size - 1; ++i) {
                result[i][j] = count++;
            }

            for(; j > starty; --j) {
                result[i][j] = count++;
            }

            for(; i > startx; --i) {
                result[i][j] = count++;
            }
            startx++, starty++;
            size--;
            c--;
        }

        if(n % 2 == 1) {
            result[startx][starty] = count;
        }
        return result;
    }
};
// @lc code=end

