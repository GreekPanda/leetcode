class Palindrome {
	public:
		bool isPalindrome(string &s) {
			if(s.size() == 0)
				return true;
			
			int l = 0;
			int r = s.size() - 1;
			
			while(l < r) {
				if(isalnum(s[l])) {				
					l += 1;
					continue;
				}
				if(isalnum(s[r])) {
					r -= 1;
					continue;
				}
				
				if(isalnum(s[l]) == isalnum(s[r])) {
					--l;
					++r;					
				} else 
					return false;
					
			}
			return true;
		}
};