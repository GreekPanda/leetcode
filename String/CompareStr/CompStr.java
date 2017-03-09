public class CompStr {
	public boolean compareStrings(String A, String B) {
		if(A == null || B == null)
			return false;
		
		if(A.length() < B.length())
			return false;
		
		final int NUM = 26;
		
		char[] count = new char[NUM];
		
		for(int i = 0; i < A.length(); i++) {
			count[A.charAt[i] - 'A']++;			
		}
		
		for(int i = 0; i < B.length(); i++) {
			count[B.charAt[i] - 'A']--;
			if(count[B.charAt[i] - 'A'] < 0)
				return false;
		}
		
	}
}