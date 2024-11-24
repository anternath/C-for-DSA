#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  
    
    while (t--) {
        int n;
        cin >> n; 
        
        vector<int> seq;
        for (int i = 1; i <= n; ++i) {
            seq.push_back(7 * i - 5);  
        }

       
        for (int i = 0; i < n; ++i) {
            cout << seq[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
