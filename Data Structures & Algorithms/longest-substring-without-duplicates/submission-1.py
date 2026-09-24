class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        charSet = set()
        l = 0
        res = 0
        for r in range(len(s)):
            #When we get a duplicate we remove the entire string before it
            #left is incremented uptil s[r]
            while s[r] in charSet:
              charSet.remove(s[l])
              l += 1
            charSet.add(s[r])
            lenOfCharSet =  r - l + 1
            res = max(res,lenOfCharSet)
        
        return res
            

