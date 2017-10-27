class Solution{
    public int woodCut(vector<int> &L, int k) {
        int start = 0, end = 0; 

    }

    private int cut(vector<int> &L, int k, int mid) {
        int sum = 0;
        for(int l : L)
            sum += l / mid;

        return sum >= k;
    }
};
