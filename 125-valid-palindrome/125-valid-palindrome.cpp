class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        if(n==0 || n==1)
            return true;
        string ans;
        for(int i=0;i<n;i++){
            if(isupper(s[i]))
                ans+=tolower(s[i]);
            else if((s[i]>96 && s[i]<123) || (s[i]>47 && s[i]<58))
                ans+=s[i];
        }
        cout<<ans;
        n=ans.size();
        for(int i=0;i<n/2;i++){
            if(ans[i]!=ans[n-i-1]){
                return false;
            }
        }
        return true;
    }
};