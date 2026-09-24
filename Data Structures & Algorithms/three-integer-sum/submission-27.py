class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        ans = []

        for i,a in enumerate(nums):
            if i > 0 and nums[i - 1] == a:
                continue
            left = i + 1 
            right = len(nums) - 1
            while left < right:
                curr_sum = a + nums[right] + nums[left]
                if curr_sum == 0:
                    ans.append([a,nums[left],nums[right]])
                    left += 1
                    right -= 1
                    while left < right and nums[left] == nums[left -1]:
                        left += 1
                elif curr_sum < 0:
                    left = left + 1
                else: 
                    right = right - 1
               
        return ans
                
