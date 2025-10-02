class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        queue <pair<pair<int,int>,int>> q;
        //int vis[n][m]={0};
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }
                if(grid[i][j]==1){
                    count++;
                }
            }
        }
        int t=0;
        int check=0;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            t=q.front().second;
            q.pop();

            int row[]={-1,0,1,0};
            int col[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int p=r+row[i];
                int w=c+col[i];
                if (p >= 0 && p < n && w >= 0 && w < m && grid[p][w] == 1 && vis[p][w] == 0){
                    q.push({{p,w},t+1});
                    vis[p][w]=2;
                    check++;
                }
            }

        }
        if(check!=count) return -1;

        return t;
    }
};