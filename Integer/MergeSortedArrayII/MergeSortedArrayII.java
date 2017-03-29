class MergeSortedArrayII {
	public ArrayList<int >mergeSortedArrayII(ArrayList<int> A, ArrayList<int> B) {
		if(A == null || A.isEmpty == 0)
			return null;
		if(B == null || B.isEmpty == 0)
			return null;
		
		ArrayList<int> C = new ArrayList<int>();
		
		int aLen = A.size();
		int bLen = B.size();
		
		int i = 0, j = 0;
		
		while(i < aLen && j < bLen) {
			if(A[i] < B[j]) {
				C.add(A.get(i));
				++i;
			}
			
			if(A[i] > B[j]) {
				C.add(B.get(j));
				++j;
			}
		}
		
		while(i < aLen) {
			C.add(A.get(i));
			++i;
		}
		
		while(j < bLen) {
			C.add(B.get(j));
			++j;
		}
		
		return C;
	}
}