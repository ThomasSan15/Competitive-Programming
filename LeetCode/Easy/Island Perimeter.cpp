//https://leetcode.com/problems/island-perimeter/description/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;

            for(int i = 0; i < grid.size(); i++){
                for(int j = 0; j < grid[i].size(); j++){
                    if((i > 0 && grid[i-1][j] == 0 && grid[i][j] == 1 )||
                         i == 0 && grid[i][j] == 1) perimeter++; //Up
                    
                    if((i < grid.size() - 1 && grid[i+1][j] == 0 && grid[i][j] == 1 )||
                         i == grid.size() - 1 && grid[i][j] == 1) perimeter++; // Down
                        
                    if((j > 0 && grid[i][j-1] == 0 && grid[i][j] == 1 )||
                         j == 0 && grid[i][j] == 1) perimeter++; //Left

                    if((j < grid[i].size() - 1 && grid[i][j+1] == 0 && grid[i][j] == 1 )||
                         j == grid[i].size() - 1 && grid[i][j] == 1) perimeter++; //Right
                }
            }
            return perimeter;
    }
};