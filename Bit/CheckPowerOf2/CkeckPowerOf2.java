class Solution {
	public boolean checkPowerOf2(int n) {
		if(n < 0)
			return false;
		else
			return ((n & (n - 1)) == 0);
		
	}
}