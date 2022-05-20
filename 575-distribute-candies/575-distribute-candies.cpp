class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> m;
        int count;
        for(auto x:candyType){
            if(m[x]==0)
                count++;
            m[x]++;
        }
        int s=candyType.size();
        return min(s/2,count);
    }
};