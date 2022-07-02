// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int search(int nums[], int s, int e, int k){
    //complete the function here
        int m;
        s=0;
        while(s<=e){
            m=(s+e)/2;
            if(k==nums[m])
                return m;
            if(nums[s]<=nums[e]){
                if(k<nums[m])
                    e=m-1;
                else
                    s=m+1;
            }
            else if(nums[m]>=nums[s]){
                if(k<nums[m] && k>nums[e])
                    e=m-1;
                else
                    s=m+1;
            }
            else{
                if(k>nums[m] && k<nums[e])
                    s=m+1;
                else
                    e=m-1;
            }
        }
    return -1;
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends