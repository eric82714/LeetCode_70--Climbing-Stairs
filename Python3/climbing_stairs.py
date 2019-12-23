class Solution:
    def climbStairs(self, n: int) -> int:
        fibonacci = {}
        
        for i in range(1, n+1):
            fibonacci[i] = fibonacci.get(i-1, 0) + fibonacci.get(i-2, 1)

        return fibonacci[n]
