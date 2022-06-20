class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> check;
        check.push(s[s.size()-1]);
        for(int i=s.size()-2;i>=0;i--){
            if(check.empty())
                check.push(s[i]);
            else if(check.top()!=s[i])
                check.push(s[i]);
            else{
                check.pop();
            }
        }
        string ans="";
        while(!check.empty()){
            ans+=check.top();
            check.pop();
        }
        return ans;
    }
};