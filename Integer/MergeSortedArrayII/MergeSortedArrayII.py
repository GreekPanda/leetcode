def MergeSortedArrayII:
    def mergeSortedArrayII(self, A, B):
        if A is none:
            return A
        if B is none:
            return B
            
        aLen = len(A)
        bLen = len(b)
        
        C = []
        
        while i < aLen and j < bLen:
            if A[i] > B[j]:
                C.append(A[i])
                i += 1
            else:
                C.append(B[j])
                j += 1
                
            
        while i < aLen:
            C.append(A[i])
            i += 1
            
        while j < bLen:
            C.append(B[j])
            j += 1    
        
        
        return C