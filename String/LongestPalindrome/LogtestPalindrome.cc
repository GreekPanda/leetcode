class LongestPalindrome {
	public:
		string longestPalindrome(string &s) {
			string result;
			
			if(s == null || s.size() == 0)
				return s;
			
			int n = s.size();
			int longest = 0, left = 0,  right = 0;
			
			for(int i = 0; i < n; ++i) {
				for(int j = i + 1; j < n; ++j) {
					string subStr = s.substr(i, j - i);
					if(isPalindrome(subStr) || subStr.size() > longest) {
						logest = j - i;
						left = i;
						right = j;
					}
					
				}
			}
			
			result = s.substr(left, right - left);
			return result;
		}

		
	private:
		bool isPalindrome(string &s) {
			if(s == null || s.size() == 0)
				return false;
			
			n = s.size();
			
			for(int i = 0; i < n; ++i) {
				if(s[i] != s[n - i - 1])
					return false;
			}
			return true;
		}
};

   