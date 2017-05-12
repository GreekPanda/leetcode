class Solution {
	public:
		int hashFunction(vector<char> &s, int n) {
			if(s.empty())
				return -1;
			
			long hashSum = 0;
			for(int i = 0; i < s.length; ++i) {
				hashSum += s[i] * modPow(33, s.length - i - 1, n);
				hashSum %= n;
			}
			return (int)hashSum;
		}
	
	private:
		int modPow(int base, int n, int mod) {
			if(n == 0)
				return 1;
			else if(n == 1)
				return (base % mod);
			else if(n % 2 == 0) {
				long tmp = modPow(base, n / 2, mode);
				return (tmp % mod) * (tmp % mod) % mod;
			} else
				return (base % mod) * modPow(base, n - 1, mod) % mod;
			
		}		
};