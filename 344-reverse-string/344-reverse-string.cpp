class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int end=n-1;
        for(int i=0;i<n/2;i++){
            char change=s[i];
            s[i]=s[end];
            s[end]=change;
            end--;
        }
        //cout<<s;
    }
};