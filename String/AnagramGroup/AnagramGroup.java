public class AnagramGroup {
	private boolean anagram(String s, String t) {
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
	
	public List<List<String>> anagram(String[] s) {
					
		if(s.length() < 2)
			return s;
		
		List<String> result = new ArrayList<String>();
		List<boolean> visited[s.size()];
		//TODO:Somthing is not right, with my idea.
	}
}