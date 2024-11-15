#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        int n; // Number of pillars
        cin >> n;
        
        vector<int> h(n); // Heights of the pillars
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        // DP table: dp[i][x] = min operations to make first i pillars non-decreasing,
        // where the i-th pillar has height exactly x.
        vector<vector<int>> dp(n, vector<int>(n + 1, INT_MAX));

        // Initialize the first row
        for (int x = 1; x <= n; x++) {
            dp[0][x] = abs(h[0] - x);
        }

        // Fill the DP table
        for (int i = 1; i < n; i++) {
            for (int x = 1; x <= n; x++) {
                for (int y = x; y <= n; y++) { // Ensure non-decreasing
                    dp[i][x] = min(dp[i][x], dp[i - 1][y] + abs(h[i] - x));
                }
            }
        }

        // Find the minimum operations for the last pillar
        int result = INT_MAX;
        for (int x = 1; x <= n; x++) {
            result = min(result, dp[n - 1][x]);
        }

        cout << result << endl; // Output the result for this test case
    }

    return 0;
}
