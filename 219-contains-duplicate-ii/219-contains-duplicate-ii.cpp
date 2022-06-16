class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         int i=0; 
//         int j=nums.size()-1;
//         if(k==0)
//             return false;
//         while(i<j){
// //            j=nums.size()-1;
//             for(;j>i;j--){
//                 if(abs(i-j)<=k and nums[i]==nums[j])
//                     return true;
//             }
//             i++;
//             j=nums.size()-1;
//         }
        
        map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        
        for(auto check:m){
            if((check.second).size()>1){
                for(int i=0;i<(check.second).size()-1;i++){
                    if(abs((check.second[i])-(check.second[i+1]))<=k)
                       return true;
                }
            }
        }
        
        return false;
    }
};