class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        unordered_map<string,int> m;
        vector<string> ans;
        unordered_map<string,int> answer;
        int min_ans=INT_MAX;
        
        for(int i=0;i<list1.size();i++){
            m[list1[i]]=i;
        }
        
        for(int i=0;i<list2.size();i++){
            
            if(m.find(list2[i])!=m.end()){
                int count=m[list2[i]]+i;
                min_ans=min(min_ans,count); 
            }
            
        }
        
        for(int i=0;i<list2.size();i++){
            if(m.find(list2[i])!=m.end())
                if(i+m[list2[i]]==min_ans)
                    ans.push_back(list2[i]);
        }
              return ans;
    }
};