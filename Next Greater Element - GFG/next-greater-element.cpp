// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> st;
        long long nge[n];
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and st.top()<=arr[i])
                st.pop();
            if(st.empty())
                nge[i]=-1;
            else
                nge[i]=st.top();
            st.push(arr[i]);
        }
        vector<long long> ans;
        for(int i=0;i<n;i++)
            ans.push_back(nge[i]);
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends