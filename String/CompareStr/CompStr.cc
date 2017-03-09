class CompStr {
	
	public:
		bool compareStrings(string A, string B) {
			if(A.size() < B.size())
				return false;
			
			
			const int NUM = 26;
			int count[NUM] = {0};
			
			for(int i < 0; i != A.size(); i++) {
				
				++count[A[i] - 'A'];
			}
			
			for(int i < 0; i != B.size(); i++) {
				
				--count[B[i] - 'A'];
				
				if(count[B[i] - 'A'] < 0)
					return false;
			}
			
			return true;
		}
};