class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map <char,int> m;
        int count=0;
        for(auto x:jewels)
            m[x]++;
        for(auto x:stones){
            if(m[x])
                count++;
        }
        return count;
    }
};