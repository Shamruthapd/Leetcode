class Solution(object):
    def checkInclusion(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: bool
        """
        d={}
        for i in s1:
            d[i]=d.get(i,0)+1
        l=0
        r=len(s1)
        while(r<=len(s2)):
            c=0
            m={}
            for i in range(l,r):
                m[s2[i]]=m.get(s2[i],0)+1
            if(d==m):
                return True
            l+=1
            r+=1
        return False
        
'''for i in m:
if(d.get(i,0)!=m.get(i,0)):
    break
c+=1'''