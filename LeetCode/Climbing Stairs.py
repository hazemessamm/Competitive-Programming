results = {}
class Solution:
    def fib(self, n):
        if n <= 1:
            return n
        if n in results:
            return results[n]
        else:
            result = self.fib(n-1) + self.fib(n-2)
        results[n] = result
        return result
    def climbStairs(self, n: int) -> int:
        return self.fib(n+1)
