class MergeSortedArrayII {
	public:
		vector<int> mergeSortedArrayII(vector<int> &A, vector<int> &B) {
			if(A == null || A.size() == 0)
				return null;
			if(B == null || B.size() == 0)
				return null;
			
			vector<int> C;
			
			int aLen = A.size();
			int bLen = B.size();
			
			int i = 0, j = 0;
			
			while(i < aLen && j < bLen) {
				if(A[i] < B[j]) {
					C.push_back(A[i]);
					++i;
				}
				
				if(A[i] > B[j]) {
					C.push_back(B[j]);
					++j;
				}
			}
			
			while(i < aLen) {
				C.add(A[i]);
				++i;
			}
			
			while(j < bLen) {
				C.add(B[j]);
				++j;
			}
			
			return C;
		}
};