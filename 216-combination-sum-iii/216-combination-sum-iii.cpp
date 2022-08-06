class Solution {
public:
    void combo(int index, int target, vector<int> &ds,vector<vector<int>> &ans, int k){
        if(index>9 || ds.size() == k){
            if(target==0 and ds.size() == k)
                ans.push_back(ds);
            return;
        }
        if(index<=target){
            ds.push_back(index);
            combo(index+1,target-index,ds,ans,k);
            ds.pop_back();
        }
        combo(index+1,target,ds,ans,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds;
        vector<vector<int>> ans;
        combo(1,n,ds,ans,k);
        return ans;
    }
};