class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        d={}
        for i in range(len(nums)):
            if( nums[i] not in d):
                d[nums[i]]= i
            else:
                j=d[nums[i]]
                if(abs(i-j)<=k):
                    return True
                else:
                    d[nums[i]]=i
        return False
        