class Soluton {
	public:
		int factorialTrailingZeros(int n) {
			if(n == 0)
				return 0;
			else if(n < 0)
				return -1;
			else 
				return n / 5 + factorialTrailingZeros(n / 5);
		}
}