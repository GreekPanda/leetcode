class CountAndSay {
	public String countAndSay(int n) {
		if(n <= 0)
			return "";
		
		StringBuilder sb = new StringBuilder("1");
		for(int i = 1; i < sb.length(); i++) {
			sb = getNextSeq(sb);
		}
		return sb.toString();
	}
	
	private StringBuilder getNextSeq(StringBuilder sb) {
		StringBuilder next_seq = new StringBuilder();
		
		int cnt = 1;
		for(int i = 0; i < sb.length(); i++) {
			if(i + 1 < sb.length() && sb.CharAt(i) == sb.CharAt(i + 1)) {
				cnt++;
			} else {
				next_seq.append(cnt);
				next_seq.append(sb.CharAt(i));
				cnt = 1;
				
			}
		}
		return next_seq;
	}
}