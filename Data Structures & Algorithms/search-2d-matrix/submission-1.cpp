class Solution {
public:
    bool checkInRow(int i, vector<vector<int>> &matrix, int target){
        int m = matrix[0].size();
        return (matrix[i][0] <= target && target <= matrix[i][m-1]);
    }

    int getRow(vector<vector<int>> &matrix, int target){
        int n = matrix.size();
        int lo = 0, hi = n - 1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (checkInRow(mid, matrix, target)) {
                return mid;
            } else if (matrix[mid][0] > target) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return -1;
    }

    int getCol(vector<vector<int>> &matrix, int target, int row){
        int m = matrix[0].size();
        int lo = 0, hi = m - 1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (matrix[row][mid] == target) {
                return mid;
            } else if (matrix[row][mid] > target) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return -1;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = getRow(matrix, target);
        if (r == -1) return false;

        int c = getCol(matrix, target, r);
        return c != -1;
    }
};