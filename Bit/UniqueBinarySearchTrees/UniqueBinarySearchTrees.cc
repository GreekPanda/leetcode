class Solution {
	public:
		uniqueBinarySearchTrees(int n) {
			if(n < 0)
				return -1;
			
			vector<int> count(n + 1);
			count[0] = 1;
			
			for(int i = 0; i < n; ++i) 
				for(j = 0; j < i; ++j)
					count[i] += count[j] * count[i - j - 1];
			
			
			return count[n];
		}
};