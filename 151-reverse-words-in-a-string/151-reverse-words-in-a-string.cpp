class Solution {
public:
    string reverseWords(string s) {
        int l=0;
        int r=s.size()-1;
        string ans="";
        string word="";
        int lettercount=0,spacecount=0;
        while(l-1<r){
            if(s[r]!=' '){
                word=s[r]+word;
                r--;
                lettercount++;
                spacecount=0;
            }
            else{
                spacecount++;
                if(spacecount>1){
                    r--;
                    continue;
                }
                if(lettercount!=0){
                    ans=ans+word+" ";
                    word="";
                }
                r--;
                
            }
        }
        ans+=word;
        int i=ans.size()-1;
        while(ans[i]==' '){
            ans=ans.substr(0,ans.size()-1);
            i--;
        }
        return ans;
    }
};