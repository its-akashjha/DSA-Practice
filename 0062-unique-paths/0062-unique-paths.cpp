class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int N = m+n-2;
        int r = m-1;
        double res = 1.0;
        for(int i=1;i<=r;i++){
            res = res * (N-r+i)/i; // m+n-2 C n-1
        }
        return (int)res;
        
    }
};