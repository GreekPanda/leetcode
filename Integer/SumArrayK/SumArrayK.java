class SumArrayK {
	
	/*O(n^2)*/
	public boolean sumArrayK(int[] a, int n, int sum) {
		int i, j, curr_sum;
		
		for(i = 0; i < n; ++i) {
			curr_sum = a[i];
			for(j = i; j < n; ++j) {
				if(curr_sum == sum) {
					return true;
				}
				if(curr_sum > sum || j == n) {
					break;
				}
				curr_sum += a[i];
			}
		}
		return false;
	}
	
	/*O(n)*/
	public boolean sumArrayK1(int[] , int n, int sum) {
		int start = 0, j, curr_sum = a[0];
	
		for(int i = 0; i < n; ++i) {
			while(curr_sum > sum && start < i - 1) {
				curr_sum -= a[start];
				start++;
			}
			
			if(curr_sum == sum)
				return true;
			
			if(i < n)
				curr_sum += a[i];
			
			
			if(curr_sum > sum || i == n)
				return false;
			
			
		}
		return false;
	}
}