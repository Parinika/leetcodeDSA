class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int s=nums.size();
        int sum=0;
        for(int i=0;i<s;i++){
            sum+=nums[i];
        }
        int maxsize=-1;
        int target=sum-x;
        int i=0;
        int subsum=0;
        int j=0;
        if(target<0)
            return -1;
        while(i<s){
            subsum=subsum+nums[i];
            if(subsum>target){
                while(subsum>target && j<s){
                    subsum=subsum-nums[j];
                    j++;
                }
            }
            if(subsum==target){
                maxsize=max(maxsize,i-j+1);
            }
            i++;
        }
        if(maxsize==-1)
            return -1;
        return s-maxsize;
    }
};