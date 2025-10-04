class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        
        k=""
        for i in s.lower():
            if (i.isalnum()):
                k+=i
        m=k.lower()
        k=k.lower()
        n=len(k)
        
        for i in range(0,n):
            if(k[i]!=k[n-1-i]):
                return False
        return True

        