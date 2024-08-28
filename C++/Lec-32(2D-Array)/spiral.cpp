// it is been done in leetcode and then copied here

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        // Check for an empty matrix or if the first row is empty
        if (matrix.empty() || matrix[0].empty()) {
            return ans; // Return an empty vector if the matrix is empty
        }

        int row = matrix.size();
        int column = matrix[0].size();
        int rowMin = 0, rowMax = row - 1, colMin = 0, colMax = column - 1;

        while (rowMin <= rowMax && colMin <= colMax) {
            // Traverse from left to right along the top row
            for (int i = colMin; i <= colMax; ++i) 
                ans.push_back(matrix[rowMin][i]);
            rowMin++;

            // Traverse from top to bottom along the right column
            for (int j = rowMin; j <= rowMax; ++j) 
                ans.push_back(matrix[j][colMax]);
            colMax--;

            // Traverse from right to left along the bottom row
            if (rowMin <= rowMax) {
                for (int k = colMax; k >= colMin; --k) 
                    ans.push_back(matrix[rowMax][k]);
                rowMax--;
            }

            // Traverse from bottom to top along the left column
            if (colMin <= colMax) {
                for (int l = rowMax; l >= rowMin; --l) 
                    ans.push_back(matrix[l][colMin]);
                colMin++;
            }
        }

        return ans;
    }
};
