class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n=len(nums)
        i=1
        p=[0] *n
        s=[0]*n
        p[0]=1
        s[-1]=1
        
        for i in range(1,n):
            p[i]=p[i-1]*nums[i-1]
        for i in range(n-2,-1,-1):
            s[i]=s[i+1]*nums[i+1]
        k=[]
        for i in range(n):
            k.append(p[i]*s[i])
        return k