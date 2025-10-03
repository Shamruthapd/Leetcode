class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        l=0
        u=len(nums)-1
        
        while(l<=u):
            mid=(u+l)//2
            if(nums[mid]==target):
                return mid
            elif (nums[mid]>target):
                u=mid-1
            else :
                l=mid+1
        return l
        