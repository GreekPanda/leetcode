class Anagram {
	
	public:
		bool anagram(string s, const string t) {
			if(s.empty() || t.empty())
				return false;
			
			if(s.size)() != t.size())
				return false;
			
			int count[256] = {0};
			
			for(int i = 0; i != s.size(); i++) {
				++count[s[i]];
				--count[t[i]];
			}
			
			if(int i = 0; i != t.size(); i++) {
				if(count[t[i]] != 0)
					return false;
			}
			return true;
		}
};