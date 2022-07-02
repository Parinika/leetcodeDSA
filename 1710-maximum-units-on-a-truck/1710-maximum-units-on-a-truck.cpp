// class Solution {
// public:
//     static bool comp(vector<int> a,vector<int> b){
//         return a[1]>b[1];
//     }
//     int maximumUnits(vector<vector<int>>& nums, int k) {
//         sort(nums.begin(),nums.end(),comp);
//         int ans=0;
//         int i=0;
//         while(k>0 and i<(nums.size())){
//             int mn=min(nums[i][0],k);
//             k-=mn;
//             ans+=(mn*nums[i][1]);
//             i++;
//         }
//         return ans;
//     }
// };


class Solution {
public:
    static bool comp(vector<int> v1, vector<int> v2){
        return v1[1]>v2[1];}
    
    double maximumUnits(vector<vector<int>>& boxTypes, int k) {
       sort(boxTypes.begin(), boxTypes.end(), comp);
        int res = 0;
        for(int i=0; i<boxTypes.size(); i++){
            if(k<=0)
                break;
            else if(boxTypes[i][0] <= k){
                res += (boxTypes[i][0] * boxTypes[i][1]);
                k -= boxTypes[i][0];
            }
            else{
                res += boxTypes[i][1] * k;
                k -= boxTypes[i][0];
                //break;
            }
        }
        return res;
    }
};