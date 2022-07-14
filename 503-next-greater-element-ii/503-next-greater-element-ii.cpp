class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack <int> st;
        int n=nums.size();
        int nqe[n];
        for(int i=2*n-1;i>=0;i--){
            while((!st.empty()) && st.top()<=nums[i%n])
                st.pop();
            if(i<n){
                if(!st.empty())
                    nqe[i%n]=st.top();
                else
                    nqe[i%n]=-1;
            }
            st.push(nums[i%n]);
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nqe[i]);
        }
        return ans;
    }
};