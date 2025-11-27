class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        d={}
        for i in nums:
            d[i]=d.get(i,0)+1
        m=sorted(d.values())
        j=[]
        p=0
        for i in range(k):
            p=p-1
            for key, value in d.items():
                if value == m[p] and key not in j:
                    j.append(key)
                    break
    
        return j
        