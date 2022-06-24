class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    int n=nums.size();
	int dp[n];
	
	dp[0]=1;
    if(n==1)
        return 1;
	int maxans=0;
	for(int i=1;i<n;i++){
	    
	    int element = nums[i];
	    int maxLength=0;
	    for(int j=0;j<i;j++){
	        if(element>nums[j]){
	            maxLength=max(maxLength,dp[j]);
	        }  
	    }
	    dp[i]=maxLength+1;
        maxans=max(maxans,dp[i]);
	}
	return maxans;
    }
};