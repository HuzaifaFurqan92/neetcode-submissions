class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1
        

        while left <= right:
            mid = left + (right - left)//2
            if nums[mid] == target :
                return mid
            elif nums[mid] < target :
                # if target is less than nums[mid] than we move greater portion
                left = mid + 1
            else :
                # if target is less than nums[mid] then move to left portion so 
                # right becomes behind mid 
                right = mid -1
        return -1