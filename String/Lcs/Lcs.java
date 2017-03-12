public class LCS {
	public int longestCommonSubstring(String s, String t) {
		if(s == null || t == null)
			return 0;
		
		if(s.length() == 0 || t.length == 0)
			return 0;
		
		int lcs = 0;
		
		for(int i = 0; i < s.length(); ++i) {
			for(int j = 0; j < t.length(); ++j) {
				int lcs_tmp = 0;
				while((i + lcs_tmp < s.length()) && (j + lcs_tmp < t.length()) && (s[i + lcs_tmp] == t[j ++ lcs_tmp])) {
					++lcs_tmp;
				}
				if(lcs_tmp > lcs)
					lcs_tmp = lcs;
				 
			}
		}
		return lcs;	
	}
}