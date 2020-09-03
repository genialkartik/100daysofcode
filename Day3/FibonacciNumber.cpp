// leetcode.com/problems/fibonacci-number/

class Solution {
public:
    int cal(int n){
        if(n==0 || n==1)
            return n;
        else
            return (cal(n-1)+cal(n-2));
    }
    int fib(int N) {
        if(N==0 || N==1)
            return N;
        else{
            int i = 0;
            int sum = 0;
            int res = 0;
            while(i<N){
                sum = cal(i);
                if(i>=N-2)
                    res += sum;
                i++;
            }
        return res;
        }
    }
};  
