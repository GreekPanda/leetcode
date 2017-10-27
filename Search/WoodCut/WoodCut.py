class Solution:
    def woodCut(self, L, k):
        if sum(L) < K:
            return 0

        start, end = 0, max(L)
        while start + 1 < end:
            mid = start + (end -start) / 2
            pieces = sum(i / mid for i in L)
            if pieces < K:
                end = mid
            else:
                start = mid

        if sum(i / end for i in L) >=k:
            return end
        return start

