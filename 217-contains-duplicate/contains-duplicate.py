class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        d={}
        for i in nums:
            d[i]=d.get(i,0)+1
            if(d[i]>1):
                return True
        return False
        