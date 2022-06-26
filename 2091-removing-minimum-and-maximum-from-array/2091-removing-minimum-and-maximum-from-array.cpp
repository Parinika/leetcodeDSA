class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1 || n==2)
            return n;
        int minimum=INT_MAX;
        int minindex,maxindex;
        int maximum=INT_MIN;
        int mid=n/2;
        int ans=0;
        for(int i=0;i<n;i++){
            minimum=min(minimum,nums[i]);
            if(minimum==nums[i])
                minindex=i;
            maximum=max(maximum,nums[i]);
            if(maximum==nums[i])
                maxindex=i;
        }
        //cout<<minindex<<" "<<maxindex<<" "<<minindex+1<<" "<<maxindex+1<<" "<<maxindex+1+minindex+1;
        //if(n%2==0){
        //cout<<ans<<" 1";
            if(minindex<mid and maxindex<mid){
                ans=ans+max(maxindex,minindex)+1; 
                return ans;
            }
            else if(minindex>=mid and maxindex>=mid){
                ans=ans+n-min(maxindex,minindex); 
                return ans;
            }
            if(minindex<mid)
                ans=ans+minindex+1;
            else
                ans=ans+(n-minindex);
            //cout<<ans<<" ";
            if(maxindex<mid)
                ans=ans+maxindex+1;
            else
                ans=ans+(n-maxindex);
        // }
        // else{
        //     if(minindex<mid)
        //         ans=ans+minindex+1;
        //     else
        //         ans=ans+(n-minindex);
        //     if(maxindex<mid)
        //         ans=ans+maxindex+1;
        //     else
        //         ans=ans+(n-maxindex);
        // }
        //cout<<" "<<ans;
        return min(ans,min((max(minindex,maxindex)+1),n-min(minindex,maxindex)));
    }
};