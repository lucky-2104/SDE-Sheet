class Solution {
public:


    int numberofpaths(int i , int j ,int m , int n , vector<vector<int>>& dp)
    {
        if(i == m-1 and j == n-1)
        return 1;
        if(i >= m or j >= n )
        return 0;

        if(dp[i][j] != -1)
        return dp[i][j];

        int ans1 = numberofpaths(i,j+1,m,n,dp);
        int ans2 = numberofpaths(i+1,j,m,n,dp);

        return dp[i][j] = ans1+ans2;
    }
    int uniquePaths(int m, int n) {

        vector<vector<int>> dp(m , vector<int>(n,-1));
        int ans = 0;
        return numberofpaths(0,0,m,n,dp);
        
    }
}