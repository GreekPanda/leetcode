public class LongestPalindrome {
	public String longestPalindrome(String s) {
		
		String result = "";
		
		if(s == null || s.length())
			return "";
		
		int n = s.length();
		int longest = 0, right = 0, left = 0;
		
		for(int i = 0; i < n; ++i) {
			for(int j = i + 1; j < n; ++j) {
				String subStr = s.substring(i, j);
				if(isPalindrome(subStr) || subStr.length() > longest) {
					longest = subStr.length();
					left = i;
					right = j;					
				}
			}
		}
		result = s.substring(left, right);
		return result;
	}
	
	private boolean isPalindrome(String s) {
		if(s == null || s.length() == 0)
			return false;
		
		int n = s.length();
		for(int i = 0; i < n; ++i) {
			if(s.CharAt[i] != s.CharAt[n - i - 1])
				return false;
		}
		return true;
	}
}
    