class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> prefix;
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        if(sum-nums[0]==0)
            return 0;
        prefix.push_back(nums[0]);
        // cout<<prefix[0];
        for(int i=1;i<nums.size();i++){
            prefix.push_back(prefix[i-1]+nums[i]);
            // cout<<i<<endl;
            if((sum-prefix[i-1]-nums[i])==prefix[i-1])
                return i;
        }
        return -1;
    }
};