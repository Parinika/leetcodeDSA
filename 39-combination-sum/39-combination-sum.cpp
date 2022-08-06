class Solution {
public:
    void combo(int index,int target,vector<int> &v, vector<vector<int>> &ans, vector<int> &arr){
        if(index==arr.size()){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
        // v.push_back(arr[index]);
        if(arr[index]<=target){
            v.push_back(arr[index]);
            combo(index,target-arr[index],v,ans,arr);
            v.pop_back();
        }
        // v.pop_back();
        combo(index+1,target,v,ans,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        combo(0,target,v,ans,candidates);
        return ans;
    }
};