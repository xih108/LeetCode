#807. Max Increase to Keep City Skyline
#At the end, the "skyline" when viewed from all four directions of the grid, i.e. top, bottom, left, and right, 
#must be the same as the skyline of the original grid. 
#What is the maximum total sum that the height of the buildings can be increased?

#First get the skyline but get the max, then foe row and col get min, then sum the heights added.

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
