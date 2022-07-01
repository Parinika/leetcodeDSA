class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                x=nums[i];
                count++;
            }
            else if(x==nums[i]){
                count++;
            }
            else
                count--;
        }
        return x;
    }
};