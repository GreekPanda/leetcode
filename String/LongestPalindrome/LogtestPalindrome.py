class LongestPalindrome:
    def isLongestPalindrome(self, s):
        if not s:
            return ""
            
        n = len(s)
        longest, left, rigth = 0, 0, 0
        
        for i in xrange(0, n):
            for j in xrange(i + 1, n +1):
                substr = s[i:j]
                if self.isPalindrome(substr) and len(substr) > longest:
                    longest = len(substr)
                    left, right = i, j
                    
        result = s[left::right]
        return result
        
        
     def isPalindrome(self, s):
        if not s:
            return false
            
        return s == s[::-1]