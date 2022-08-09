class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        func(0,path,ans,s);
        return ans;
    }
    void func(int index,vector<string> &path, vector<vector<string>> &ans, string s){
        if(index==s.size()){
            ans.push_back(path);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(isPalindrome(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                func(i+1,path,ans,s);
                path.pop_back();
            }
        }
    }
    bool isPalindrome(string s,int start,int end){
        while(start<=end)
            if(s[start++]!=s[end--])
                return false;
        return true;
    }
};