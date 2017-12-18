
# Author : Shiv anand

class Solution:
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """

        dp = [0]*len(cost)
        dp[0] = cost[0]

        dp[1] = min(cost[1] , cost[1] + cost[0])

        for i in range(2, len(cost)):
        	dp[i] = min(dp[i-1] + cost[i] , dp[i-2] + cost[i])

        return min(dp[len(cost) - 1] , dp[len(cost) - 2])


        
