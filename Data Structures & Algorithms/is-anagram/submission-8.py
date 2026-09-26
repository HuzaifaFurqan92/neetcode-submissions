class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        ans = [0] * 26
        for i in s: 
            a =  i.lower()
            idx = (ord(a) - 97) % 26
            ans[idx] = ans[idx] + 1
        
        for m in t:
            a =  m.lower()
            idx = (ord(a) - 97) % 26
            if ans[idx] == 0:
                return False
            ans[idx] = ans[idx] - 1
        
        for l in ans:
            if l > 0:
                return False
        
        return True
