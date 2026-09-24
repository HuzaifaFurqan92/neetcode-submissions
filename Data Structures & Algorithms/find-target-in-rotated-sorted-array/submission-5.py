class Solution:

    def search(self, nums: list[int], target: int) -> int:
        left, right = 0, len(nums) - 1

        while left <= right:
            mid = (left + right) // 2

            # Target found!
            if nums[mid] == target:
                return mid

            # Step 1: Check if LEFT half is sorted
            if nums[left] <= nums[mid]:
                # Is target within the sorted left half?
                if nums[left] <= target < nums[mid]:
                    right = mid - 1  # Search left
                else:
                    left = mid + 1  # Search right

            # Step 2: Otherwise, RIGHT half must be sorted
            else:
                # Is target within the sorted right half?
                if nums[mid] < target <= nums[right]:
                    left = mid + 1  # Search right
                else:
                    right = mid - 1  # Search left

        return -1  # Target not found