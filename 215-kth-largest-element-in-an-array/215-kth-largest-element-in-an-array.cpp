class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto no:nums){
            pq.push(no);
        }
        int cnt = 1;
        int ans=-1;
        while(cnt <= k){
            
            ans=pq.top();
            pq.pop();
            cnt++;
        }
        return ans;
        }
};