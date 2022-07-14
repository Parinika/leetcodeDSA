class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        vector<int> pse;
        int n=heights.size();
        for(int i=0;i<n;i++){
            while(!st.empty() and heights[st.top()]>=heights[i])
                st.pop();
            if(st.empty())
                pse.push_back(0);
            else
                pse.push_back(st.top()+1);
            st.push(i);
        }
        while(!st.empty()) st.pop();
        vector<int> nse;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and heights[st.top()]>=heights[i])
                st.pop();
            if(st.empty())
                nse.push_back(n-1);
            else
                nse.push_back(st.top()-1);
            st.push(i);
        }
        reverse(nse.begin(), nse.end());
        int maxAns=0;
        for(int i=0;i<n;i++)
            maxAns=max(maxAns,heights[i]*(nse[i]-pse[i]+1));
        return maxAns;
         
    }
};