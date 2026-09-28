class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
      
        map = {}
        for i in range(len(nums)):
            map[nums[i]] = i # num:idx
        
        for m in range(len(nums)):
            diff = target - nums[m]
            if diff in map and map[diff] != m:
                return [m,map[diff]]
        
      
        return []
               
        
  
