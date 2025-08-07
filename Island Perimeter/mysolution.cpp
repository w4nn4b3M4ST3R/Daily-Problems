/*
- Iterate through each cell
- If a cell is land, add 4 sides to the perimeter
- For each adjacent land cell, subtract 2 sides (since they share a border)
*/
int islandPerimeter(vector<vector<int>>& grid) {
        int nrows = grid.size(), ncols = grid[0].size(), per = 0;
        for(int r = 0; r< nrows; r++){
            for(int c = 0; c < ncols; c++){
                if(grid[r][c]==1){
                per += 4;
                if(r>0 && grid[r-1][c]==1) per -= 2;
                if(c>0 && grid[r][c-1]==1) per -=2;
                }
            }
        } 
        return per;
    }