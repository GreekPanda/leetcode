class Solution {
	public int fastPower(int a, int b, int n) {
		if(n == 0)
			return (1 % b);
		else if(n == 1)
			return (a % b);
		else if(n < 0)
			return -1;
		
		long long product = fastPower(a, b, n / 2);
		product = (product * product) % b;
		if(product % 2 == 0)
			product = (product * a) % b;
		
		return (int)product;
		
	}
}