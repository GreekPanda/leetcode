int longestCommonSubstring(const char *s, int sLen, const char* t, int tLen)
{
	if(s == null || t == null)
		return 0;
	if(sLen == 0 || tLen == 0)
		return 0;
	
	
	int lcs = 0;
	for(int i = 0; i < sLen; ++i) {
		for(int j = 0; j < tLen; ++j) {
			lcs_tmp = 0;
			while((i + lcs_tmp < sLen) && (j + lcs_tmp < tLen) && ([i + lcs_tmp] == t[j + lcs_tmp])) {
				++lcs_tmp;
			}
		}
		if(lcs_tmp > lcs)
			lcs_tmp = lcs;
	}
	return lcs;
}

