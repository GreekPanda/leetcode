class MergeSortedArray:
    def mergeSortedArray(self, arrayA, lenA, arrayB, lenB):
        if arrayB is none:
            return arrayA
            
        index = lenA + lenB - 1
        while lenA > 0 and lenB > 0:
            if arrayA[lanA - 1] > arrayB[lenB - 1]:
                arrayA[index] = arrayA[lenA - 1]
                lanA -= 1
            else:
                arrayA[index] = arrayB[lenB - 1]
                lenB -= 1
                
            index -= 1
            
        while lenB > 0:
            A[index] = B[lenB - 1]
            lenB -= 1
            index -= 1
        