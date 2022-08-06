class Solution {
public:
    void combo(int index,int n,int k,vector<vector<int>> &ans,vector<int> &ds){
        if(index==n+1){
            if(ds.size()==k){
                ans.push_back(ds);
            }
            return;
        }
        ds.push_back(index);
        combo(index+1,n,k,ans,ds);
        ds.pop_back();
        combo(index+1,n,k,ans,ds);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        combo(1,n,k,ans,ds);
        return ans;
    }
};