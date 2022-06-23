class Solution {
public:
    int dp[10005];
    int minNoOfCoins(vector<int> &coins, int amount){
        //this is the amount I need to create with these coins
        
        if(amount==0)
            return 0;
        //these are the max possible number of coins
        if(amount<0){
            return 1e9;
        }
        if(dp[amount]!=-1)
            return dp[amount];
        
        int minAns=1e9;
        for(int i=0;i<coins.size();i++){
            
            int currentValue=coins[i];
            int ans=minNoOfCoins(coins,amount-currentValue);
            minAns=min(ans+1,minAns);
        }
        return dp[amount]=minAns;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int ans=minNoOfCoins(coins,amount);
        if(ans==1e9){
            return -1;
        }
        return ans;
    }
};