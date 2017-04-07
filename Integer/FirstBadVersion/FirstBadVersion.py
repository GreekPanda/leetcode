class FirstBadVersion:
    def firstBadVersion(self, n):
        left, right = 0, n + 1
        while left + 1  < right:
            mid = left + (right -left) / 2
            if VersionControl.isBadVersion(mid):  
                right = mid
            else:
                left = mid
            
        return left + 1