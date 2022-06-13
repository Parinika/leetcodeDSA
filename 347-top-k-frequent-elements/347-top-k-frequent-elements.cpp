class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> m;
        for(auto no:nums){
            m[no]++;
        }
        
        //pair consisting of freq,no
        priority_queue<pair<int,int>> pq;
        
        for(auto entry:m){
            
            pq.push({entry.second,entry.first});
        }
        int cnt=1;
        vector<int> ans;
        while(cnt<=k){
            pair<int,int> p=pq.top();
            pq.pop();
            ans.push_back(p.second);
            cnt++;
        }
        return ans;
    }
};