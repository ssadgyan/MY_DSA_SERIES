class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int n_squared = n * n;

        // Step 1: Compute actual sum and actual sum of squares
        long actual_sum = 0;
        long actual_squares_sum = 0;
        for (const auto& row : grid) {
            for (int num : row) {
                actual_sum += num;
                actual_squares_sum += (long)num * num;
            }
        }

        // Step 2: Compute expected sum and expected sum of squares
        long expected_sum = (long)n_squared * (n_squared + 1) / 2;
        long expected_squares_sum = (long)n_squared * (n_squared + 1) * (2 * n_squared + 1) / 6;

        // Step 3: Calculate a - b and a + b
        long a_minus_b = actual_sum - expected_sum;
        long a_plus_b = (actual_squares_sum - expected_squares_sum) / a_minus_b;

        // Step 4: Solve for a and b
        int a = (a_plus_b + a_minus_b) / 2;
        int b = (a_plus_b - a_minus_b) / 2;

        return {a, b};
    }
};