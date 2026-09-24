class Solution {
public:
    void bfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>&  grid){
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row,col});

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

           int dr[] = {-1,0,1,0};
            int dc[] ={0,-1,0,1};
       
            for(int i =  0; i < 4;i++ ){
                   int nrow = row + dr[i];
                    int ncol = col + dc[i];
                    if (nrow >= 0 && nrow < n && ncol >=0 && ncol < m 
                        && !vis[nrow][ncol] && grid[nrow][ncol] == '1'){
                            vis[nrow][ncol] = 1;
                            q.push({nrow,ncol});
                        }
            }
           
        } 

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int islands = 0;
        vector<vector<int>> vis(n,vector<int> (m,0));

        for(int r = 0;  r < n; r++){
            for(int c = 0 ; c < m ; c++ ){
                if(!vis[r][c] && grid[r][c] == '1'){
                    bfs(r,c,vis,grid);
                    islands++;
                }
            }
        }
        return islands;
    }
};
