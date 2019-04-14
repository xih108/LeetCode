class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        left = [max(i) for i in grid]
        top = []
        for j in range(len(grid[0])):
            list1 = []
            for i in range(len(grid)):
                list1 += [grid[i][j]]
            top += [max(list1)]
        
        ans = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                ans += min(top[j], left[i]) - grid[i][j]
        return ans
