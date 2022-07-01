class Solution {
public:
    int search(vector<int>& nums, int k) {
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==k){
                return(mid);
            }
            if(nums[s]<=nums[e]){
                
                if( k < nums[mid]){
                    e = mid-1;
                }else{
                    s = mid+1;
                }
                
            }else if(nums[mid] >= nums[s]){
                if(k < nums[mid] and k > nums[e]){
                    e = mid-1;
                }else{
                    s = mid+1;
                }
            }else{
                if( k > nums[mid] and k <= nums[e]){
                    s = mid+1;
                }else{
                    e = mid-1;
                }
            }
        }
        return(-1);
    }
};