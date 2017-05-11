class Soluton {
	public int factorialTrailingZeros(int n) {
		if(n < 0)
			return -1;
		
		int count = 0;
		for(; n >0; n /= 5)
			count += (n / 5);
		
		return count;
	}
}