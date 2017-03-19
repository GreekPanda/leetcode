class WildcardMatching{
	public:
		bool isWildcardMatching(string s, int sLen, String t, int tLen) {
			int start = 0, ss = 0, i = 0, j = 0;
			while(s[i]) {
				if(t[j] == '?' || s[i] == t[j]) {
					i++;
					j++
					continue;
				}
				if(t[j] == '*') {
					star = j++;
					ss = i;
					continue;
				}
				if(star) {
					j = star;
					i = ++ss;
					continue;
				}
				
				return false;
			}
			
			while(t[j] == '*')
				j++
			
			return !t[j];
		}
};