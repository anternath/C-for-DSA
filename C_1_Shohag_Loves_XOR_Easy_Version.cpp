#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to find all divisors of a number
vector<int> find_divisors(int x) {
    vector<int> divisors;
    for (int i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) {
            divisors.push_back(i); // Add divisor
            if (i != x / i) {
                divisors.push_back(x / i); // Add complementary divisor
            }
        }
    }
    return divisors;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        long long m;
        cin >> x >> m;

        vector<int> divisors = find_divisors(x); // Find divisors of x
        int count = 0;

        // Check each divisor
        for (int z : divisors) {
            int y = z ^ x; // Calculate y using XOR
            if (y > 0 && y <= m && y != x) { // Check validity of y
                count++;
            }
        }

        cout << count << endl; // Output the count of valid y
    }
    return 0;
}
