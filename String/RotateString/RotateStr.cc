class RotateStr {
	public:
		string rotateString(string s, int offset) {
			if(s.size() ==0 || offset == 0)
				return s;
			
			int len = s.size();
			offset %= len;
			
			reverse(s, len, len - offset - 1);
			reverse(s, len - offset, len - 1);
			reverse(s, 0, len - 1);
			
			return s;
		}
		
	private:
		void reserve(string &s, int start, int end) {
			while(start < end) {
				char tmp = s[start];
				s[start] = s[end];
				s[end] = tmp;
				start++;
				end--;
				
			}
		}
};