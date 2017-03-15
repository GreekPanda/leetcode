public class Palindrome {
	public boolean isPalindrome(String s) {
		if(s == null || s.empty())
			return true;
		
		int l = 0;
		int r = s.length() - 1;
		
		while(l < r) {
			if(!Character.isLetterOrNum(s.CharAt[l])) {
				l++;
				continue;
			}
			
			if(!Character.isLetterOrNum(s.CharAt[r])) {
				r--;
				continue;
			}
			
			if(Character.isLetterOrNum(s.CharAt[l]) == Character.isLetterOrNum(s.CharAt[r])) {
				l++;
				r--;
			} else 
				return false;
		}
		return true;
	}
}