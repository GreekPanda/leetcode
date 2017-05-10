class Solution {
    public:
        double findMedianSortedArrays(vector<int> &A, vector<int> &B) {
            if(A.empty() B.empty())
                return -1.0;

            int lenA = (A == null) ? 0: A.size();
            int lenB = (B == null) ? 0: B.size();
            int totalLen = lenA + lenB;

            int indexA = 0, indexB = 0, indexC = 0;
            vector<int> C; 

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
