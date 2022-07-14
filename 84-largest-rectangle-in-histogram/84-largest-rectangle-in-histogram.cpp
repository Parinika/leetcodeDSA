class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n=heights.size();
        int maxAns=0;
        for(int i=0;i<=n;i++){
            while(!st.empty() and (i==n || heights[st.top()]>=heights[i])){
                int height=heights[st.top()];
                st.pop();
                int width;
                if(st.empty())
                    width=i;
                else
                    width=i-st.top()-1;
                maxAns=max(maxAns,width*height);
            }
            st.push(i);
        }
        return maxAns;
         
    }
};