#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool found = false;
        
        // Check for two consecutive same characters
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == s[i + 1]) {
                cout << s.substr(i, 2) << endl;
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
