class Solution {
public:
//     int findTargetSumWays(vector<int>& nums, int target) {
//         target=abs(target);
//         int sum = 0;
//         int n =  nums.size();
//         // sum = accumulate(nums.begin() , nums.end() , sum);
//         for(int i=0; i<n; i++)
//              sum+=nums[i];
        
        
//         if(target>sum || (target+sum)%2!=0){
//             return 0;
//         }
//         int val = (target+sum)/2;
        
//         // vector<vector<int>> dp(n+1 , vector<int>(val+1));
    
//     int dp[n+1][val+1];
        
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<=val;j++){
//                 if(i==0){
//                     dp[i][j]=0;
//                 }
//                 if(j==0){
//                     dp[i][j]=1;
//                 }
                
//             }
//         }
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=val;j++){
//                 if(nums[i-1]<=j){
//                     dp[i][j]=dp[i-1][j-nums[i-1]] + dp[i-1][j];
//                 }
//                 else{
//                     dp[i][j]=dp[i-1][j];
//                 }
                
//             }
//         }
//         return dp[n][val];
//     }
    
    int countSubsets(vector<int>& nums, int n, int M)
    {
        int t[n+1][M+1];

        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=M; j++)
            {
                if(i==0)
                    t[i][j]=0;
                if(j==0)
                    t[i][j]=1;
            }
        }

        //t[0][0] = 1;

        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<=M; j++)
            {
                if(nums[i-1]<=j)
                    t[i][j]=t[i-1][j-nums[i-1]]+t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
        }

        return t[n][M];  
    }

    int findTargetSumWays(vector<int>& nums, int target)
    {
         target=abs(target);
         int n=nums.size();
         int sum=0;

         for(int i=0; i<n; i++)
             sum+=nums[i];

        int M=(sum+target)/2;
        if(sum<target||(sum+target)%2!=0)
            return 0;
        
         return countSubsets(nums, n, M);
    }  
    
};