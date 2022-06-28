class Solution {
public:
    
    void dfs(int i,int j,vector<vector<int>> &visited,vector<vector<char>> &grid){
        int n=grid.size();
        int m=grid[0].size();
        
        if(i<0 || i>=n || j<0 || j>=m || visited[i][j]==1 || grid[i][j]=='0')
            return;
        
        visited[i][j]=1;
        dfs(i+1,j,visited,grid);
        dfs(i,j+1,visited,grid);
        dfs(i-1,j,visited,grid);
        dfs(i,j-1,visited,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        //count the number of islands
        
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> visited(n,vector<int>(m,0));
        int countOfIslands=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((grid[i][j]=='1') && (visited[i][j])==0){
                    countOfIslands++;
                    dfs(i,j,visited,grid);
                }
            }
        }
        return countOfIslands;
    }
};