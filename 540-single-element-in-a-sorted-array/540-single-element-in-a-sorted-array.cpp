class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1,m;
        int ans=0;
        if(nums.size()==1)
            return nums[0];
        while(r-l>1){
            m=(l+r)/2;
            if(m%2==0){
                if(nums[m-1]==nums[m])
                    r=m-2;
                else if(nums[m]==nums[m+1])
                    l=m+2;
                else
                    return nums[m];
            }
            else{
                if(nums[m-1]==nums[m])
                    l=m+1;
                else if(nums[m]==nums[m+1])
                    r=m-1;
                else
                    return nums[m];
            }
        }
        return nums[l];
    }
};