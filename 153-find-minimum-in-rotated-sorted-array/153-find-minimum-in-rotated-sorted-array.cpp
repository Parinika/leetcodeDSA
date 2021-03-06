class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int l=0;
        int r=nums.size()-1;
        int mid;
        
        while(l<r){
            mid=(l+r)/2;
            if(nums[l]<nums[r])
                return nums[l];
            else if(nums[mid]<nums[l])
                r=mid;
            else
                l=mid+1;
        }
        return nums[l];
    }
};