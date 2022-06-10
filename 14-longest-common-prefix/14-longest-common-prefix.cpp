class Solution {
public:     
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        bool match=true;
        for(int i=0;i<strs[0].size();i++){
            char ch=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(ch!=strs[j][i]){
                    match=false;
                    break;
                }
            }
            if(match==false)
                break;
            else
                ans+=ch;
        }
        return ans;
    }
};