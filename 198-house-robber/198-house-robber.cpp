class Solution {
public:
    int dp[105];
    int collectMoney(int index,vector<int> &nums){
        
        
        //tle dega bina dp ke
        //odd even won't work...eg 10 1 1 10
        int n=nums.size();
        if(index>=n)
            return 0;
        if(dp[index]!=-1)
            return dp[index];
        //skip house
        int ans=collectMoney(index+1,nums);
        //choose current
        int ans1=nums[index]+collectMoney(index+2,nums);
        dp[index]=max(ans,ans1);
        return max(ans,ans1);
        
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return collectMoney(0,nums);
    }
};