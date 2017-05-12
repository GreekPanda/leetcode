class Solution {
	public:
		int aPlusB(int a, int b) {
			int result = a ^ b;
			int carry = a & b;
			carry <<= 1;
			if (carry != 0)
				result = aPlusB(result, carry);
			
			return result;
		}
};