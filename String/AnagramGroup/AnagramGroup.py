class AnagramGroup:
    def anagrams(self, strs):
        if(len(strs) < 2)
            return strs
        result = []
        visited = [False] * len(strs)
        for i, s1 in enumerate(strs):
            hasAnagram = False;
            for j, s2 in enumerate(strs):
                if(j > i) and not visited[j] and self.isAnagrams(s1, s2):
                    result.append(s2)
                    visited[j] = True
                    hasAnagram = True
                 if not visited[i] and hasAnagram:
                    result.append(s1)
        return result
        
        
     def isAnagrams(self, s1, s2):
        if sorted(s1) == sorted(s2):
            return True
        return False