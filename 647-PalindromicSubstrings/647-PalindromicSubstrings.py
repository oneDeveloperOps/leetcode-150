# Last updated: 11/4/2025, 7:50:06 AM
class Solution:
    def checkPal(s):
        return s[::-1] == s
    
    def getSub(s):
        j = 0
        lis = []
        for i in range(0, len(s)):
            lis.append(s[j:i+1])
        return lis
    
    def countSubstrings(self, s: str) -> int:
        c = 0
        li = []
        for i in range(0, len(s)):
            li += (Solution.getSub(s[i: len(s)]))
        for i in li:
            if(Solution.checkPal(i)):
                c+=1
        return c
        
        