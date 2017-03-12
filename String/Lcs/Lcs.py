class LCS:
    def longestCommonSubstring(self, s, t):
        if not (s and t)
            return 0
        
        lcs = 0
        for i in range(len(s)):
            for j in range(len(t)):
                lcs_temp = 0
                while i + lcs_temp < len(s)  and j + lcs_temp < len(t) and s[i + lcs_temp] == t[j + lcs_temp]:
                    lcs_temp += 1
                if lcs_temp > lcs:
                    lcs_temp = lcs
         return lcs;      