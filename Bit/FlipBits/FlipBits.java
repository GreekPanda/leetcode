class Solution {
	public:
		int flipBits(int a, int b) {
			int count = 0;
			int ret = a ^ b;
			while(ret != 0) {
				++count;
				ret &= (ret - 1);
			}
			return count;
		}
};