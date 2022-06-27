class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        // map<int,int> m;
        // for(int i=0;i<n;i++){
        //         m[nums[i]]++;
        //     else
        //         m[nums[i]]=0;
        // }
        // int j=1;
        // vector<int> v;
        // while(j<n)
        //     for(auto num:m){cout<<j<<" ";
        //     if(num.first!=j)
        //         v.push_back(j++);
        //     else
        //         j++;
        //     }
        // return v;
        vector<int> v;
        int check[100001];
        memset(check,0,sizeof(check));
        for(int i=0;i<n;i++){
            check[nums[i]]=nums[i];
        }
        for(int i=1;i<=n;i++){
            if(check[i]==0)
                v.push_back(i);
        }
        return v;
    }
};