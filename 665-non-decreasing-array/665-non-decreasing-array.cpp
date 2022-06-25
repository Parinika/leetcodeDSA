class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count=1;
        int n=nums.size();
        if(n==1)
            return true;
        for(int i=0;i<n-1;i++){
            if(i==0 and nums[i]>nums[i+1]){
                nums[i]=nums[i+1];
                count=0;
            }
            else if(i==n-1 and nums[i]>nums[i+1]){
                if(count==0)
                    return false;
                count=0;
            }
            else if(nums[i]>nums[i+1]){
                if(count==0)
                    return false;
                count++;
                if(nums[i+1]>=nums[i-1]){
                    nums[i]=nums[i+1];
                    count=0;
                }
                else{
                    nums[i+1]=nums[i];
                    count=0;
                }
            }
        }
        return true;
    }
};