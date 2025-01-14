class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        fast, slow = 0, 0
        for fast in range(len(nums)):
            if(nums[fast] != val):
                nums[slow] = nums[fast]
                slow += 1

        return slow
