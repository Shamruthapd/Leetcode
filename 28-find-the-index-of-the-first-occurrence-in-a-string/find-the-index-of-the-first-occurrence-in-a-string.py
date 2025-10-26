class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        #return  haystack.find(needle)
        '''s=""
        c=0
        for i in range (0,len(haystack)):
            s+=haystack[i]
            if s not in needle:
                s=""
            else:
                if s==needle:
                    c+=1
                    return i+1-len(needle)
        if c==0:
            return -1'''
        n=len(haystack)
        m=len(needle)
        
        for i in range(n-m+1):
            if(needle==haystack[i:i+m]):
                return i
        return -1
