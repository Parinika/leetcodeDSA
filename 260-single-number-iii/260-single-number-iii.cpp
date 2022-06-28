class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int XOR,XOR1=0,XOR2=0;
        for(int i=0;i<nums.size();i++){
            XOR=XOR^nums[i];
        }
        int cnt=0;
        while(XOR){
            if(XOR&1)
                break;
            cnt++;
            XOR=XOR>>1;
        }
        for(int i=0;i<nums.size();i++){
            if((nums[i]) & (1<<cnt))
                XOR1=XOR1^nums[i];
            else
                XOR2=XOR2^nums[i];
        }
        vector<int> v;
        v.push_back(XOR1);
        v.push_back(XOR2);
        return v;
    }
};