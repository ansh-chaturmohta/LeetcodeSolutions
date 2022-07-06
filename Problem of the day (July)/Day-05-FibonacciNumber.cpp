class Solution {
public:
    int fib(int n) {
        vector<int>fibo;
        fibo.push_back(0);
        fibo.push_back(1);
        for(int i=2;i<=30;i++){
            fibo.push_back(fibo[i-1]+fibo[i-2]);
        }
        return fibo[n];
    }
};