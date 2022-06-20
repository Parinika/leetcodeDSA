class Solution {
public:
    int store[31];
    int fibonacci(int no){
        if(no<=1)
            return no;
        //cheching if we have value of these numbers already stored
        
        if(store[no]!=-1){
            return store[no];
        }
        
        int value1=fibonacci(no-1);
        int value2=fibonacci(no-2);
        
        int ans=value1+value2;
        
        store[no]=ans; // storing the value also called memoizing the solutions        
        return ans;
    }
    
    int fib(int n) {
        
        //initialize the values of an array we use memset()
        
        memset(store,-1,sizeof(store));
        return fibonacci(n);
    }
};