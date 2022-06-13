class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        long long int num =n;
        while(num>0){
            if(num & 1==1)
                count++;
            num=num>>1;
        }
        return count;
    }
};