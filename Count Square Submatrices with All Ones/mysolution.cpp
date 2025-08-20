/*
- Traverse each cell in the matrix; if it's 1, check its top, left, and top-left neighbors.

- Use min(top, left, top-left) + 1 to compute the largest square ending at that cell.

- Add the computed value to the total count (each value represents how many squares end there).

- Optimize space by using a single row buffer and a prev variable to track diagonal values.

- If any neighbor is 0, the square can't grow—reset the current cell's value to 1.

*/

int countSquares(vector<vector<int>>& matrix) {
    int nrows = matrix.size(), ncols = matrix[0].size(), count = 0;
    vector<int> dp(ncols, 0);
    int prev = 0;

    for (int r = 0; r < nrows; r++) {
        prev = 0;
        for (int c = 0; c < ncols; c++) {
            int temp = dp[c];
            if (matrix[r][c] == 1) {
                if (r == 0 || c == 0) {
                    dp[c] = 1;
                } else {
                    dp[c] = min({dp[c], dp[c - 1], prev}) + 1;
                }
                count += dp[c];
            } else {
                dp[c] = 0;
            }
            prev = temp;
        }
    }

    return count;
}