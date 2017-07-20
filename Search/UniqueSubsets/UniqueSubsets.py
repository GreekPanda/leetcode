class Solution:
    def subsets(self, s):
        if sub is None:
            return []
            
        ret = []
        s.sort()
        len = len(s)
        
        for i in xrange(2**len):
            tmp = []
            for j in xrange(len):                
                if i & (1 << j):
                    if s[j] == s[j - 1]:
                        continue
                    tmp.append(s[j])
                ret.append(tmp)    
        return ret