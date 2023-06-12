class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int n = nums.size();
        vector<string>ans;
        if(n==0) return ans;
        int a = nums[0];
        for(int i=0;i<n;i++){
            if(i==n-1 || nums[i]+1!=nums[i+1]){
                if(nums[i]!=a){
                    ans.push_back(to_string(a)+"->"+to_string(nums[i]));
                }
                else {
                    ans.push_back(to_string(a));
                }
                if(i!=n-1){ 
                    a=nums[i+1];
                }
            }
            
        }
        return ans;;
    }
};