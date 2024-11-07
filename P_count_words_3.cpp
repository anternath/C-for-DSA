#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    getline(cin, name);
    int cnt = 0;
    bool inWord = false;

    for (int i = 0; i < name.size(); i++) {
        if ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z')) {
            if (!inWord) {
                cnt++;          // নতুন একটি শব্দ শুরু হয়েছে
                inWord = true;  // বর্তমানে একটি শব্দের ভিতরে আছি
            }
        } 
        else {
            inWord = false; // যদি লেটার না হয়, তাহলে শব্দ শেষ হয়েছে
        }
    }

    cout << cnt << endl;
    return 0;
}
