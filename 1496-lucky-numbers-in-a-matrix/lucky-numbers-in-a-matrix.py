class Solution(object):
    def luckyNumbers(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        k=[]
        for i in range(len(matrix)):
            k.append(min(matrix[i]))
        p=[]
        for c in range(len(matrix[0])):
            g=matrix[0][c]
            for r in range(1,len(matrix)):
                if(matrix[r][c]>g):
                    g=matrix[r][c]
            p.append(g)
        n=[]
        for i in k:
            if i in p:
                n.append(i)
        return n


