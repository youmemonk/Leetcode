class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s) != len(t)):
            return False
        
        sm, tm = {}, {}
        for i in range(len(s)):
            sm[s[i]] = 1 + sm.get(s[i], 0)
            tm[t[i]] = 1 + tm.get(t[i], 0)
            
        return (sm == tm)