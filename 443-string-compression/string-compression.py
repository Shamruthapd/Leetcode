class Solution:
    def compress(self, chars: List[str]) -> int:
        s=chars[0]
        c=1
        for i in range(1,len(chars)):
            if(chars[i]==chars[i-1]):
                c+=1
            else:
                if(c!=1):
                    s= s+ str(c)
                s+=chars[i]
                c=1
        if(c!=1):
            s+=str(c)
        chars.clear()
        for i in s:
            chars.append(i)
        return len(s)
