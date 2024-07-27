#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int minNonAdjacentSumRowWise(vector<vector<int>> &matrix)
{
    if (matrix.empty() || matrix[0].empty())
        return 0;

    int m = matrix.size();
    int n = matrix[0].size();

    // Initialize the dp array with the first row values
    vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
    for (int j = 0; j < n; ++j)
    {
        dp[0][j] = matrix[0][j];
    }

    // Fill the dp array
    for (int i = 1; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int minPrev = INT_MAX;
            for (int k = 0; k < n; ++k)
            {
                if (k != j)
                { // Ensuring elements are not in the same row
                    minPrev = min(minPrev, dp[i - 1][k]);
                }
            }
            dp[i][j] = matrix[i][j] + minPrev;
        }
    }

    // Find the minimum value in the last row of dp array
    int result = INT_MAX;
    for (int j = 0; j < n; ++j)
    {
        result = min(result, dp[m - 1][j]);
    }

    return result;
}

int main()
{
    vector<vector<int>> matrix = {
        {250, 200, 150},
        {200, 180, 150},
        {150 ,500, 200},
        {100,120,150}};

    cout << "Minimum sum of non-adjacent elements row-wise: " << minNonAdjacentSumRowWise(matrix) << endl;
    return 0;
}
