class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<int> dp(target+1 , -1);
        dp[0]=1;
        help(nums, target , dp);
        
        return dp[target];
        
    }
    
    int help(vector<int>& nums, int target , vector<int>&dp ){
        
        if(dp[target]>-1) return dp[target];
        
        int count=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]<=target){
            count+= help(nums, target-nums[i] , dp);
            }
        }
        dp[target]=count;
        return count;
    }
    
};