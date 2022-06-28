class Solution {
public:
    int totalMoney(int n) {
        int count=0;
        int mon=0;
        int amount=0;
        while(count+1<=n){
            mon++;
            count++;
            amount+=mon;
            cout<<count<<" "<<mon<<" "<<amount<<endl;
            if(count%7==0){
                mon=(count/7);
            }
        }
        return amount;
    }
};