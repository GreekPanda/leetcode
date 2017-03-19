class LengthOfLastWord {
	public:
		int lengthOfLastWord(string s) {
			if(s.empty())
				return 0;
			
			int x = s.find_first_not_of(' ');
			return (x == std::string::npos) ? 0 : x - s.find_first_of(' ', x);
		}
		
		int lengthOfLastWord(String s, int) {
			if(s.length() == 0)
				returun 0;
			
			int cnt = 0;
			for(int i = s.length(); i > 0; --i) {
				if(s[i] == ' ') {
					if(cnt > 0)
						break;
				} else
					cnt++;
				
			}
			return cnt;
		}
};