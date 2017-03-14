class ReverseWord {
	public:
		void reverseWords(string &s) {
			if(s.empty())
				return s;
			
			string result, tmp;
			string::size_type len = s.size();
			
			while(len != 0) {
				tmp.clear();
				while(!isspace(s[len--])) {
					tmp.push_back(s[len]);
					if(len == 0)
						break; 
				}
				
				if(!tmp.empty()) { 
					if(!result.empty()) {
						result.push_back(' ');
					}
					std::reverse(tmp.begin(), tmp.end());
					result.push_back(tmp);
				}
			}
			
			return result;
		}
};