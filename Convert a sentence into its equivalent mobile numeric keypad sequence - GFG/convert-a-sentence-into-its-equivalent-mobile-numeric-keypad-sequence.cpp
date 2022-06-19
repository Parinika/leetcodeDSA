// { Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string printSequence(string s)
{
    //code here.
    string ans="";
    
    for(int i=0;i<s.size();i++){
        
        if(s[i]>='A' && s[i]<='O'){
            
            int num;
            int times;
            
            num=(s[i]-'A')/3+2;
            times=(s[i]-'A')%3+1;
            
            for(int j=0;j<times;j++)
                ans+=to_string(num);
        }
        
        else if(s[i]>='P' && s[i]<='S'){
                
                int times;
                times=s[i]-'P'+1;
                for(int j=0;j<times;j++)
                    ans+=to_string(7);
        }
        
        else if(s[i]>='T' && s[i]<='V'){
                
                int times;
                times=s[i]-'T'+1;
                for(int j=0;j<times;j++)
                    ans+=to_string(8);
        }
        
        else if(s[i]>='W' && s[i]<='Z'){
                
                int times;
                times=s[i]-'W'+1;
                for(int j=0;j<times;j++)
                    ans+=to_string(9);
        }
        else
            ans+=to_string(0);
    }
    
    return ans;
}