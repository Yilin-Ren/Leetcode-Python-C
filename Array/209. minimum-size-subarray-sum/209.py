class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        end, start, sum, num = 0, 0, 0, len(nums) + 1
        while(end < len(nums)):
            sum += nums[end]
            while(sum >= target):
                sum -= nums[start]
                num = min(num, end - start + 1)
                start += 1
            end += 1
            
        return 0 if num == len(nums) + 1 else num
        
