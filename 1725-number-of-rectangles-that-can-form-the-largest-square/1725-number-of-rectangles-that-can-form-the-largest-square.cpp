class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int count;
        int maxans;
        int maxsize=0;
        unordered_map<int,int> m;
        int i=0,j;
        while(i<rectangles.size()){
            count=min(rectangles[i][0],rectangles[i][1]);
            maxsize=max(maxsize,count);
            m[count]++;
            i++;
        }
        return m[maxsize];
    }
};