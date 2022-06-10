class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> m;
        unordered_map<string,int> m1;
        int count=0;
        for(int i=0;i<words1.size();i++){
            m[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++){
            m1[words2[i]]++;
        }
        for(int j=0;j<words2.size();j++){
            if(m[words2[j]]==1 && m1[words2[j]]==1){
                count++;
                //m[words2[j]]=0;
            }
        }
        return count;
    }
};