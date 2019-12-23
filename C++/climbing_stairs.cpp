class Solution {
public:
    int climbStairs(int n) {
        vector<int> fibonacci = {1, 1};
        
        for(int i = 2; i <= n; i++){     
            fibonacci.push_back(fibonacci[i-1] + fibonacci[i-2]);
        }
            
        return fibonacci[n];
    }
};
