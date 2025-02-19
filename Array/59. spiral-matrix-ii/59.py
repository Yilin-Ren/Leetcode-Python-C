class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        nums = [[0]*n for _ in range(n)]
        startx, starty = 0, 0
        loop, mid = n//2, n//2
        count = 1

        for offset in range(1, loop + 1):
            for i in range(starty, n - offset) :    # 从左至右，左闭右开
                nums[startx][i] = count
                count += 1
            for i in range(startx, n - offset) :    # 从上至下
                nums[i][n - offset] = count
                count += 1
            for i in range(n - offset, starty, -1) : # 从右至左
                nums[n - offset][i] = count
                count += 1
            for i in range(n - offset, startx, -1) : # 从下至上
                nums[i][starty] = count
                count += 1                
            startx += 1         # 更新起始点
            starty += 1

        if n % 2 == 1:
            nums[mid][mid] = count

        return nums
