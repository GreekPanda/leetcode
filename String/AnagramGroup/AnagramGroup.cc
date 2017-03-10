using namespace std;

class AnagramGroup {
	public:
		vector<string> anagram(vector<string> &s) {
			if(s.size() < 2)
				return s;
			
			vector<string> result;
			vector<bool> visited(s1.size(), false);
			
			for(int i = 0; i != s.size(); ++i) {
				bool hasAnagram = false;
				
				for(int j = i + 1; j < s.size(); ++j) {
					if(!visited[j && isAnagram(s[i], s[j])) {
						result.push_back(s[j]);
						visited[j] = true;
						hasAnagram = true;
					}
				}
				if(!visited[i] && hasAnagram)
					result.push_back(s[i]);
			}
			
			return result;
		}
	
	private:
		bool isAnagram(string &s, string &t) {
			if(s1.size() != t.size())
				return false;
			
			const int NUM = 26;
			int count[NUM] = {0};
			
			for(int i = 0; i < s.size(); i++) {
				++count[s[i] - 'a'];
				--count[t[i] - 'a'];
			}
			
			for(int i = 0; i < t.size(); ++i) {
				if(count[t[i] -  'a'] < 0)
					return false;
			}
			return true;
		}
};