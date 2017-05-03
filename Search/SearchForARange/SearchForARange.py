class Solution:
    def searchForARange(self, A, target):
        ret = [-1, -1]
        if not A:
            return ret
        
        start, end = 0, len(A) - 1
        while start + 1 < end:
            mid = (start +  end) / 2
            if A[mid] ==  target:
                end = mid
            elif A[mid] < target:
                start = end
            else:
                end = mid
                
            if A[start] ==  target:
                ret[0] =  start
            else:
                ret[0] = end
                
            start, end = 0, len(A) - 1
            while start + 1 < end:
                mid = (start + end) / 2
                if A[start] == target:
                    start = mid
                elif A[start] < target:
                    start = mid
                else:
                    end = mid
            
            if A[end] ==  target:
                ret[1] = end
            else:
                ret[1] = start
       
        return ret