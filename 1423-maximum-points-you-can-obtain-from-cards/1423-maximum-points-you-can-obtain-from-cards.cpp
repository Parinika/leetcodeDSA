class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int s=cardPoints.size();
        int j=0;
        int maxSum=0;
        int sum=0;
        int totalSum=0;
        for(int i=0;i<s;i++){
            totalSum+=cardPoints[i];
            if(i<s-k)
                sum=totalSum;
        }
        maxSum=max(maxSum,(totalSum-sum));
        // for()
        for(int i=s-k;i<s;i++){
            // if(i<s-k){
               // sum+=cardPoints[i];
                //maxSum=max(maxSum,(totalSum-sum));
                // }
            if(j<s){
                sum=sum+cardPoints[i]-cardPoints[j];
                maxSum=max(maxSum,(totalSum-sum));
                j++;
                }
        }
        return maxSum;
    }
};