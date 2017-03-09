class Anagram {
	public:
		bool anagram(string s, string t) {
			if(s.empty() || t.empty())
				return false;
			
			if(s.size() != s.siz())
				return false;
			
			sort(s.begin(), s.end());
			sort(t.begin(), t.begin());
			
			if(s == t)
				return true;
			else
				return false;
		}
};