public class ReverseWords {
	public String reverseWords(String s) {
		if(s.length() == 0 || s == null)
			return "";
		
		String[] attr = s.split(" ");
		StringBuilder sb = new StringBuilder();
		for(int i = attr.length() - 1; i >= 0; i--) {
			if(s[i] != "") {
				sb.append(attr[i]).append(" ");
			}
		}
		return sb.length == 0 ? sb.subString(0, s.length() - 1);
	}
}