const int TRUE  = 1;
const int FALSE = 0;

int anagram(char* s, int sLen, const char* t, int tLen)
{
	if(s == null || t == null)
		return FALSE;
	
	if(sLen != tLen)
		return FALSE;
	
	int count[256] = {0};
	
	for(int i = 0; i < sLen; i++) {
		++count[s[i]];
		--count[t[i]];
	}
	
	for(int i = 0; i != tLen; i++) {
		if(count[t[i]] != 0)
			return FALSE;
	}
	return TRUE;
}