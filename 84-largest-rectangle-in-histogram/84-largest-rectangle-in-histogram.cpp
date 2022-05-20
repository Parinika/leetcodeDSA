class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int n=heights.size();
        int ansl[n];
        int ansr[n];
        
        s.push(0);
        for(int i=1;i<n;i++){
            int val=heights[i];
            while(!s.empty() && val<heights[s.top()]){
                ansr[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            ansr[s.top()] = n;
            s.pop();
        }
        
        
        s.push(n-1);
        
        for(int i=n-2;i>=0;i--){
            //int width=0,leftw=0,rightw=0;;
            // for(int j=i;j>=0;j--)
            // for(int j=i;j<heights.length();j++)
            // maximum=max(maximum,heights[i]*width)
            int val=heights[i];
            while(!s.empty() && val<heights[s.top()]){
                ansl[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            ansl[s.top()]=-1;
            s.pop();
        }
        
        int maxarea;
        for(int i=0;i<n;i++){
            int width=ansr[i]-ansl[i]-1;
            maxarea=max(maxarea,(width*heights[i]));
        }
        return maxarea;
        
        //bruteforce approach
        
        
//             int maximum;
//             for(int i=0;i<heights.size();i++){
                
//                 int left=0,right=0,total=0;
                
//                 for(int j=i;j>=0;j--){
//                     if(heights[j]<heights[i])
//                         break;
//                     else
//                         left++;
//                 }
                
//                 for(int j=i;j<heights.size();j++){
//                     if(heights[j]<heights[i])
//                         break;
//                     else
//                         right++;
//                 }
                
//                 total=left+right-1;
//                 maximum=max(maximum,(total*heights[i]));
//             }
//         return maximum;
        
        
        }
};