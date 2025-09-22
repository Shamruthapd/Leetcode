class Solution(object):
    def maxFrequencyElements(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        d={}
        for i in nums:
            d[i]=nums.count(i)
        m=max(d.values())
        c=0
        for i in d:
            if(d[i]==m):
                c+=m
        return c
        
        