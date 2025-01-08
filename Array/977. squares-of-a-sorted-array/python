class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left, right, k = 0, len(nums)-1, len(nums)-1
        res = [float('inf')] * len(nums)
        while left <= right:
            if((nums[left]**2)<(nums[right]**2)):
                res[k] = nums[right]**2
                k -= 1
                right -= 1
            else:
                res[k] = nums[left]**2
                left += 1
                k -= 1

        return res
