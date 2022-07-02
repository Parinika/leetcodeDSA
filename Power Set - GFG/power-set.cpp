// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		   
		   vector<string> ans;
		   string temp="";
		   int n=s.size();
		   
		   for(int i=0;i<n;i++){
		       int m=ans.size();
		       ans.push_back(temp+s[i]);
		       
		       for(int j=0;j<m;j++)
		           ans.push_back(ans[j]+s[i]);
		  }
		  sort(ans.begin(),ans.end());
		  return ans;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends