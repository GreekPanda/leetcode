namespace std;

class Strstr {
	public:
		int strstr(string src, string target) {
			if(src.empty() && target.empty())
				return 0;
			
			if(src.empty())
				return -1;
			
			if(src.size() < target.size())
				return -1;
			
			for(string::size_type i = 0; i < src.size() - target.size() + 1; i++) {
				string::size_type j;
				for(; j < target.size(); j++) {
					if(src[i + j] != target[j])
						break;
				}
				if(j == target.size())
					return i;
			}
			return -1;
		}
}