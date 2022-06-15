class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i]) != m.end()){
                vec.push_back(i);
                vec.push_back(m[target-nums[i]]);
                return vec;
            }
            m[nums[i]]=i;
        }
        return vec;
    }
};