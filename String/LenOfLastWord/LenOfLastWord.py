class LenOfLastWord(object):
    def lengthOfLastWord(self, s):
        if s is none:
            returnf 0
        
        last_word = s.split()
        return len(last_word[-1]) if last_word else 0
            
     def lengthOfLastWord1(self, s):
        if s is none:
            returnf 0
        
        m = re.search(r'(?p<word>\S+)\s*$', s)
        return len(m.group('word')) if m else 0  
        
     def lengthOfLastWord2(self, s):
        if s is none:
            returnf 0
        
        cnt = 0
        for c in reversed(d):
            if c == ' ':
                if cnt > 0 then:
                    break                    
                else:
                    cnt += 1
              
        return cnt
        
         