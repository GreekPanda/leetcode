class CompStr:
    def compareStrings(self, S, T):
        letters = collections.difaultdict(int)
        for a in A:
            letters[a] += 1
        
        for b in B:
            letters[b] -= 1
            if b not in letters or letters[b] < 1: 
                return false;
                
        return true;
        
            
        