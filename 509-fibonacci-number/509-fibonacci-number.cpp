class Solution {
public:
    // recursive way
//     int store[31];
//     int fibonacci(int no){
//         if(no<=1)
//             return no;
//         //cheching if we have value of these numbers already stored
        
//         if(store[no]!=-1){
//             return store[no];
//         }
        
//         int value1=fibonacci(no-1);
//         int value2=fibonacci(no-2);
        
//         int ans=value1+value2;
        
//         store[no]=ans; // storing the value also called memoizing the solutions        
//         return ans;
//     }
    
//     int fib(int n) {
        
//         //initialize the values of an array we use memset()
        
//         memset(store,-1,sizeof(store));
//         return fibonacci(n);
//     }
    
    //iterative way
    int fib(int n){
        
        int fibonacci[35] = {};
        fibonacci[0]=0;
        fibonacci[1]=1;
        
        for(int i=2;i<=n;i++){
            fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
            }
        return fibonacci[n];
    }
    
};