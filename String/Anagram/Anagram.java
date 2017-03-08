public class Anagram {
	public boolean anagram(String s, String t) {
		if(s == null || t == null)
			return false;
		
		if(s.length() != t.length())
			return false;
		
		final int NUM = 256;
		
		int[] count = new int[NUM];
		
		for(int i = 0; i < s.length(); i++) {
			++count[s[i]];
			--count[t[i]];
		}
		
		if(int i = 0; i != NUM; i++) {
			if(count[t[i]] != 0)
				return false;
		}
		return true;
	}
}