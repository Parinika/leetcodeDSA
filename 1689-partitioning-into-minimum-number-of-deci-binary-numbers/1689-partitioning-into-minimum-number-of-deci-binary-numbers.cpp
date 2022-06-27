class Solution {
public:
    int minPartitions(string n) {
        //int num=stoi(n);
        int s=n.size();
        int maxans=INT_MIN;
        for(int i=0;i<s;i++){
            int num=n[i]-'0';
            maxans=max(maxans,num);
        }
        return maxans;
    }
};