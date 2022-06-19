class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        map<int,vector<int>> m;
        
        for(int i=0;i<nums.size();i++)
            m[nums[i]].push_back(i);
        
        int count=0;
        for(auto no:m){
            vector<int> v=no.second;
        
            if(v.size()>1){
                
                
                for(int i=0;i<v.size()-1;i++){
                    
                    for(int j=i+1;j<v.size();j++){
                        count++;
                    }
                }   
            }
        }
        return count;
    }
};