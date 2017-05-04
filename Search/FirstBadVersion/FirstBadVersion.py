class Solution:
    def FirstBadVersion(self, num):
        start, end = 0, num + 1
        while start + 1 < end:
            mid = start + (end - start) / 2
            if VersionControl.isBadVersion(mid):
                end = mid
            else:
                start = mid
               
        return start + 1      
          