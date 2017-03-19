class LenOfLastWord {
	public int lengthOfLastWord(String s) {
		if(s == null || s.length() == 0)
			return 0;
		
		int cnt = 0;
		for(int i = cnt.length(); i >= 0; --i) {
			if(s.CharAt(i) == ' ') {
				if(cnt > 0)
					break;
			} else 
				cnt++;
		}
		return cnt;
	}
}