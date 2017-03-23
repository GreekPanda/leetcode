class SumArrayK{
	public:
		vector<int> sumArrayK(int[] a, int k) {
			vector<int> result;
			
			map<int, int> hash;
			
			hash[0] = 0;
			int curr_sum = 0;
			
			for(int i = 0; i < a.size(); ++i) {
				curr_sum += a[i];
				if(hash.find(curr_sum - k) != hash.end()) {
					result.push_back(hash(curr_sum - k));
					result.push_back(i);
					return result;					
				} else {
					hash[curr_sum] = i + 1;
				}
				
			}
			return result;
		}
		
		/*Time: O(2n), Space: O(1)*/
		vector<int> sumArrayK1(int[] a, int k) {
			vector<int> result;
			
			int left_index = 0, curr_sum = 0;
			for(int i = 0; i < a.size(); ++i) {
				while(curr_sum > k) {
					curr_sum -= a[left_index];
					++left_index;
				}
				
				if(curr_sum == k) {
					result.push_back(a[left_index]);
					result.push_back(i);
					return result;
				}
				curr_sum += a[i];
			}
			
			return result;
		}
};