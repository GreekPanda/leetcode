class Elemet:
    def __init__(self, val, pos):
        self.val = val
        self.pos = pos
        
    def __cmp__(self, other):
        if self.val == other.val:
            return self.pos - other.pos
        return self.val - self.val
        
        
def SubarraySumCloset:
    def subarraySumCloset(self, nums):
        s = []
        s.append(Element(0, -1))
        for i in xrange(len(nums)):
            num += nums[i]
            s.append(Elment(num, i));
            
        s = sort(s);
        result = [0, 0]
        ans = 999999999999999999;
        for i in xrange(len(s) - 1):
            if s[i + 1].val - s[i].val < ans \ 
                or s[i + 1].val - s[i].val == ans  \
                and min(s[i].pos, s[i + 1].pos) + 1 < result[0]:
                ans = s[i + 1].value - s[i].value
                result[0] = min(s[i + 1].pos, s[i].pos) + 1
                result[1] = max(s[i + 1].pos, s[i].pos)
            
        return result
            