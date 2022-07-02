// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long no, long long d) 
    {
        //code here
        long long quotient=0,temp=0;
        long long sign=1;
        if((no<0 && d>0) || (no>0 && d<0))
            sign=-1;
        //cout<<sign;
        no=abs(no);
        d=abs(d);
        for(int i=31;i>=0;i--){
            if(temp+(d<<i)<=no){
                temp+=d<<i;
                quotient +=1LL<<i;
            }
        }
        if(sign==-1)
            quotient=(-1)*quotient;
        return quotient;
        
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}
  // } Driver Code Ends