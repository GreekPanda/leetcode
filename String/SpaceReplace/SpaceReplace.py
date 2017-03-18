class SpaceReplace:
    def spaceReplace(self, str, len):
        if str is none:
            return len
            
            
        spaces = 0
        for c in str:
            if c == ' ':
                spaces += 1
                
                
        newLen = len + spaces * 2
        index = newLen - 1
        for i in range(len - 1, -1, -1):
            if str[i] == ' ':
                str[index] = '0'
                str[index - 1] = '2'
                str[index - 2] = '%'
                index -= 3
            else:
                str[index] = str[i]
                index -= 1
                
         return str
            
        
    
        