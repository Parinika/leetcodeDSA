class Solution {
public:
    static bool comp(vector<int> a,vector<int> b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& nums, int k) {
        sort(nums.begin(),nums.end(),comp);
        int ans=0;
        int i=0;
        while(k>0 and i<(nums.size())){
            int mn=min(nums[i][0],k);
            k-=mn;
            ans+=(mn*nums[i][1]);
            i++;
        }
        return ans;
    }
};