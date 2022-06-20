class Solution {
public:
    
    vector<vector<int>> ans;
    void createSubsets(int index, vector<int> &solution, vector<int> &nums){
        
        //base condition
        if(index==nums.size()){
            ans.push_back(solution);
            return;
        }
        
        solution.push_back(nums[index]);
        createSubsets(index+1,solution,nums);
        solution.pop_back(); // since solution is passed by reference therefore it's imp to remove the last element to get the subset we previously made
        createSubsets(index+1,solution,nums);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();
        vector<int> solution;
        createSubsets(0,solution,nums);
        return ans;
    }
};