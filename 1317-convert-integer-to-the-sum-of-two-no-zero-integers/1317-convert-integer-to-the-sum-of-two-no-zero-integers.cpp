class Solution {
public:
    int x;
    // int chk(int a){
    //     cout<<"hey! you are in chk method";
    //     if((a%10==0) && (a>9)){
    //         cout<<endl<<a<<endl;
    //         return 0;
    //     }
    //     cout<<endl<<"hey! you are still in chk method"<<endl;
    //     x=chk(a/10);
    //     return x;
    // }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        int a=1,b=n-1;
        if(n>1){
            while(a<=b){
                int ch=-1,ch2=-1;
                int a1=a,b1=b;
                if(a>9)
                     while(a1>9){
                       if(a1%10==0){
                           ch=0;
                           break;
                       }
                         a1/=10;
                     }
                if(b>9)
                    while(b1>9){
                       if(b1%10==0){
                           ch2=0;
                           break;
                       }
                         b1/=10;
                     }
                if(ch==0 || ch2==0){
                    a++;
                    b--;
                }
                
                else{
                    ans.push_back(a);
                    ans.push_back(b);
                    break;
                }
            }
        }
        return ans;
    }
};