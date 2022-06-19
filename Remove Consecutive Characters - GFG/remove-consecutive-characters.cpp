// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string ans="";
        for(int i=0;i<S.length()-1;i++){
            if(S[i]!=S[i+1]){
                //S=S.substr(0,i)+S.substr(i+1,S.length()-2);
                ans+=S[i];
            }
            // else
            //     i++;
        }
        ans+=S[S.size()-1];
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
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends