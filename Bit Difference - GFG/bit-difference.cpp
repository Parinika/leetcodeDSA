// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int count=0;
        while(a!=0 || b!=0){
            // if ((a&1==1 and b&1==0) || (a&1==0 and b&1==1)){
            //     count++;
            //     cout<<count<<" ";
            // }
            if(a&1){
                if(!(b&1))
                    count++;
            }
            if(!(a&1)){
                if(b&1)
                    count++;
            }
            //cout<<count<<" "<<a<<" "<<b<<" ";
            a=a>>1;
            b=b>>1;
            //cout<<count<<" "<<a<<" "<<b<<" ";
        }
        return count;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends