class Solution {
	public:
		int digitCounts(int n, int k) {
			char c = k + '0';
			int count = 0;
			for(int i = k; i <= n; i++) {
				for(auto s: to_string(i)) {
					if(s == c)
						count++;
				}
			}
			return count;
		}
};