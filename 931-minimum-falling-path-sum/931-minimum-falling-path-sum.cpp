class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n , vector<int>(n, INT_MAX));
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            dp[0][i]=matrix[0][i];
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                
                if(j>=1 && j<n-1){

                    dp[i][j]=min(dp[i-1][j-1] , min(dp[i-1][j] , dp[i-1][j+1]))+matrix[i][j];
                }
                else if(j==0){
                     dp[i][j]=min(dp[i-1][j] , dp[i-1][j+1])+matrix[i][j];
                }
                else if(j==n-1){
                    dp[i][j]=min(dp[i-1][j-1] , dp[i-1][j])+matrix[i][j];
                }
                
                
            }
        }
        
        for(int i=0;i<n;i++){
            mini = min(mini , dp[n-1][i]);

        }
        return mini;
    }
};