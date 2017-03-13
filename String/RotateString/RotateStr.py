class RotateStr:
    def rotateString(self, s, offset):
        if s is none and len(s) == 0:
            return
            
        offset %= len(s)
        self.reverse(s, 0, len(s) - offset -1)
        self.reverse(s, len(s) - offset, len(s) - 1)
        self.reverse(s, 0, len(s) - 1)
        
    def reverse(self, s, start, end):
        while start < end:
            s[start], s[end] = s[end], s[start]
            start += 1
            end -= 1
            
            
    def rotateString1(self, s, offset):
        if s is none and len(s) == 0:
            return
            
        offset %= s
        before = s[:len[s] - offset]
        after = s[len[s] - offset:]
        s = before[::-1] + after[::-1]
        s = s[::-1]
        
        return s