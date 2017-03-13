public class RotateStr {
	public char[] RotateString(char[] s, int offset) {
		if(s.length == 0 } || offset == 0)
			return s;
		
		int len = s.length;
		offset %= len;
		
		reverse(s, 0, len - offset - 1);
		reverse(s, len - offset, len - 1);
		reverse(s, 0, len - 1);
		
		return s;
	}
	
	private void reverse(char[] s, int start, int end) {
		while(start < end) {
			char tmp = s[start];
			s[start] = s[end];
			s[end] = tmp;
			start++;
			end--;			
		}
	}
}