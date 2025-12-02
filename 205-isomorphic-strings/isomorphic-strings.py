class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        d={}
        for i in range(len(s)):
            if t[i] not in d.values():
                d[s[i]]=t[i]
            
        k=""
        for i in s:
            m=d.get(i,'')
            if(m==''):
                return False
            k+=d[i]
        if(k==t):
            return True
        return False

        