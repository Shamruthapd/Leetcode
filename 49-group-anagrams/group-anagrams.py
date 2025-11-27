class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        """l=[]
        for i in strs:
            c=sorted(i)
            p="".join(c)
            l.append(p)
        
        j=sorted(l)
        k=[]
        i=0
        m=[]
        while(i<len(strs)):
            if(j[i]==j[i+1]):
                m.append(strs[i])
            else:
                m.append(strs[i])
                k.append(m)
                m=[]
        return """
        d={}

        for i in strs:
            c=sorted(i)
            p="".join(c)
            m=tuple(p)
            if(d.get(m)):
                d[m].append(i)
            else:
                d[m]=[i]
        
        k=[]
        for i in d:
            k.append(d[i])
        return k