class LCS {
	public:
		public int longestCommonSubstring(string &s, string &t) {
			if(s.empty() || t.empty())
				return 0;
			
			int lcs = 0;
			for(int i = 0; i < s.size(); ++i) {
				for(int j = 0; j < t.size(); ++j) {
					lcs_tmp = 0;
					while((i + lcs_tmp < s.size()) && (j + lcs_tmp < t.size() && (s[i + lcs_tmp] == t[j + lcs_tmp])))
						++lcs_tmp;
					if(lcs_tmp > lcs)
						lcs_tmp = lcs;
				}
			}
			return lcs;		
		}
};