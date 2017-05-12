class Solution:
    def digitCounts(self, n, k):
        c = k + '0'
        count = 0
        for i in n:
            for s in i:
                if s == c:
                    count += 1
        return count