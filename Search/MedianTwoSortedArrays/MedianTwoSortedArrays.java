class Solution {
    public double findMedianSortedArrays(int[] A, int[] B) {
        if(A == null || B == null)
            return -1.0;

        int lenA = (A == null) ? 0: A.length;
        int lenB = (B == null) ? 0: B.length;
        int totalLen = lenA + lenB;

        int indexA = 0, indexB = 0, indexC = 0;
        int[] C = new int[totalLen];

        while(indexA < lenA && indexB < lenB) {
            if(A[indexA] < B[indexB]) {
                C[indexC++] = A[indexA++];
            } else {
                C[indexC++] = B[indexB++];
            }
        }

        while(indexA < lenA) {
            C[indexC++] = A[indexA++];
        }

        while(indexB < lenB) {
            C[indexC++] = A[indexB++];
        }

        int indexM1 = (totalLen - 1) / 2, indexM2 = totalLen / 2;
        if(totalLen % 2 == 0)
            return (C[indexM1] + C[indexM2]) / 2;
        else
            return C[indexM2];

    }
}
