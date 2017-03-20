class RmElemt {
	public:
		int removeElement(int[] s, int len, int elemt) {
			for(int i = 0; i < len; ++i) {
				if(s[i] == elemt) {
					--i;
					--n;
				}
			}
			return n;
		}
		
		int removeElement(vect<int> &s, int elem) {
			for(vector<int>::iterator iter = s.begin(); iter != s.end(); ++iter) {
				if(*iter == elem) {
					iter = s.erase(iter);
					--iter;
				}
			}
			
			return s.size();
		}
};