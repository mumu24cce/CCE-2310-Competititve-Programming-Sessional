#include <iostream>
using namespace std;

int main() {
    char symbol;
    int n;
    cin >> symbol >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        for (int j = 0; j < x; ++j)
            cout << symbol;
        cout << endl;
    }

    return 0;
}
