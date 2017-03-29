class MergeSortedArray {
	public:
		void mergeSortedArray(int[] arrayA, int m, int [] arrayB, int n) {
			int index = m + n - 1;
			while (m > 0 && n > 0) {
				if(arrayA[m - 1] > arrayB[n - 1]) {
					arrayA[index] = arrayA[m - 1];
					--m;
				} else {
					arrayA[index] = arrayA[n - 1];
					--n;
				}
			}
			
			while(n > 0) {
				A[index] = B[n - 1];
				--n;
				--index;
			}
		}
};