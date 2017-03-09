public class Anagram {
	public boolean anagram(String s, String t) {
		if(s == null || t == null)
			return false;
		
		if(s.length() != t.length())
			return false;
		
		char[] sCharArray = s.toCharArray();
		char[] tCharArray = t.toCharArray();
		
		Array.sort(sCharArray);
		Array.sort(tCharArray);
		
		for(int i = 0; i < s.length(); i++) {
			if(sCharArray[i] != toCharArray[i])
				return false;
		}
		
		return true;
 	}
}