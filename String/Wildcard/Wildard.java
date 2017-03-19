class Wardcard {
	public boolean isWildcardMatching(String s, String t) {
		if(s == null || t == null)
			return false;
		
		if(s.length() == 0 || t.length() == 0) {
			return false;
		}
		
		return internalMatching(s, 0, t, 0);
	}
	
	private boolean internalMatching(String s, int sLen, String t, int tLen) {
		if(slen == s.length() || tLen == t.length()) {
			if(slen == s.length() && tLen == t.length()) {
				return true;
			} else {
				return false;
			}
		}

		if(t.CharAt(tLen) == '*') {
			while(t.CharAt(tLen) == '*') {
				tLen++;
				
				if(tLen == t.length())
					return true;
			}
			
			while(sLen < s.length() && internalMatching(s, sLen, t, tLen)) {
				sLen++;
			}
			return sLen != s.length();
		} else if(s.CharAt(sLen) == t.CharAt(tLen) || t.CharAt(tLen) == '?') {
			internalMatching(s, sLen + 1, t, tLen + 1);
		} else 
			return false;
	}
}