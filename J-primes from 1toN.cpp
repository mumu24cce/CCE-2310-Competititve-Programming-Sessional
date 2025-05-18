//problem name:Palindrome
//Course title:Competitive Programming Sessional
//Course Code:CCE-2310
//Course Teacher:Mirza Raquib
//date:5/5/24
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a = s.size();
    string ss = "";

    // Reverse the string
    for (int i = a - 1; i >= 0; i--) {
        ss += s[i];
    }

    // Remove leading zeroes from reversed string
    bool flag = false;
    string ans = "";
    for (int j = 0; j < ss.size(); j++) {
        if (ss[j] != '0') flag = true;
        if (flag) ans += ss[j];
    }

    cout << ans << endl;

    // Check if original is palindrome
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    if (s == reversed) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
