
class Solution {
    public:
        //From bottom to top
        int minSum(vector<vector<int>> &triangle) {
            if(triangle.empty())
                return -1;
            
            vector<vector<int>> hashmap(triangle);
            
            const int N = triangle.size();
            for(int i = 0; i < N; i++) {
                hashmap[N - 1][i] = triangle[N - 1][i];
                
            }
            
            for(int i = N - 2; i > 0; i--) {
                for(int j = 0; j < i + 1; j++ ) {
                    hashmap[i][j] = min(hashmap[i + 1][j], hashmap[i + 1][j + 1]) + triangle[i][j];
                }
            }
            return hashmap[0][0];
        }
        
        //From top to bottom
        int minSum1(vector<vector<int>> &triangle) {
            if(triangle.empty())
                return -1;
            
            vector<vector<int>> hashmap(triangle);
            
            int N = triangle.size();
            for(int i = 0; i < N; i++) {
                hashmap[N][i] = triangle[N][i];
            }
            
            for(int i = 1; i < N; ++i) {
                for(int j = 0; j < i; ++j) {
                    if(j == 0)
                        hashmap[i][j] = hashmap[i - 1][j];
                    if(j == i)
                        hashmap[i][j] = hashmap[i - 1][j - 1];
                    if((j > 0) && (j < i))
                        hashmap[i][j] = min(hashmap[i - 1][j], hashmap[i - 1][j - 1]);
                    
                    hashmap[i][j] += triangle[i][j];
                }
            }
            
            int ret = INT_MAX;
            for(int i = 0; i != N; ++i) {
                ret = min(ret, hashmap[N - 1][i]);
            }
            
            return ret;
        }
        
};