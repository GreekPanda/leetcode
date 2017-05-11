class Solution {
	public:
		bool checkPowerOf2(int n) {
			if(n < 0)
				return false;
			else
				return ((n & (n - 1)) == 0);
			
		}
};