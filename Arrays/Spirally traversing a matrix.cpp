class Solution
{   
    public: 
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> result;

        int top = 0, bottom = r - 1, left = 0, right = c - 1;

        while (top <= bottom && left <= right) 
        {
            // Traverse top row
            for (int i = left; i <= right; ++i) 
            {
                result.push_back(matrix[top][i]);
            }
            top++;

            // Traverse right column
            for (int i = top; i <= bottom; ++i) 
            {
                result.push_back(matrix[i][right]);
            }
            right--;

            // Traverse bottom row
            if (top <= bottom) 
            {
                for (int i = right; i >= left; --i) 
                {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // Traverse left column
            if (left <= right) 
            {
                for (int i = bottom; i >= top; --i) 
                {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return result;
    }
};
