class Solution {
	public int fibonacci(int n) {
		if(n == 0)
			return 0;
		else if(n == 1 || n == 2)
			return 1;
		
		int fn = 0;
		int f1 = 1;
		int f2 = 0;
		
		for(int i = 3; i < n; i++) {
			fn =  f1 + f2 ;
			f2 = f1;
			f1 = fn;
		}
		
		return fn;
	}
}