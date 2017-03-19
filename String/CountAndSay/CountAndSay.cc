class CountAndSay {
	public:
		string countAndSay(int n) {
			if(n == 0)
				return null;
			
			string curr_seq = "1";
			while(--n)
				curr_seq = getNextSeq(curr_seq);
			
			return curr_seq;
		}
		
	private:
		string getNextSeq(string seq) {
			string next_seq = "";
			
			int cnt = 1;
			for(int i = 0; i < seq.size(); i++) {
				if(i + 1 < seq.length() && seq[i] ==  seq[i + 1]) {
					cnt++;
				} else {
					next_seq.push_back('0' + cnt);
					next_seq.push_back(seq[i]);
					cnt = 1;
				}
			}
			
			return next_seq;
		}
		
};