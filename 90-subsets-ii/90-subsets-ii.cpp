class Solution {
public:
    void calc(int index,int n,vector<int> &ds,vector<vector<int>> &ans,vector<int>& nums){
        // if(index>=n){
            ans.push_back(ds);
        //     return;
        // }
        for(int i=index;i<n;i++){
            if(i!=index and nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            calc(i+1,n,ds,ans,nums);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //set se try krna
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        calc(0,nums.size(),ds,ans,nums);
        return ans;
    }
};