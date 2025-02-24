#include <bits/stdc++.h>

using namespace std;
bool check(const string& s) {
    bool tang = true, giam = true;

    for (size_t i = 1; i < s.size(); i++) {
        if (s[i] < s[i - 1]) tang = false;
        if (s[i] > s[i - 1]) giam = false;
    }

    return tang || giam;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string s;
        cin >> s;

        if (check(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

