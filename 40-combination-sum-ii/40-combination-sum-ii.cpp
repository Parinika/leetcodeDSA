class Solution {
public:
    void combo(int index, int target, vector<int> &ds,vector<int> &arr, vector<vector<int>> &ans){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=index;i<arr.size();i++){
            if(i>index and arr[i]==arr[i-1])
                continue;
            if(arr[i]>target)
                break;
            ds.push_back(arr[i]);
            combo(i+1,target-arr[i],ds,arr,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        combo(0,target,ds,candidates,ans);
        return ans;
    }
};