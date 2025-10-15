class Solution(object):
    def recoverOrder(self, order, friends):
        """
        :type order: List[int]
        :type friends: List[int]
        :rtype: List[int]
        """
        k=[]
        for i in order:
            if i in friends:
                k.append(i)
        return k
        