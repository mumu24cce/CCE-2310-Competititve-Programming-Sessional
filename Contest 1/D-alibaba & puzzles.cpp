#include <iostream>
using namespace std;

bool isLucky(int num) {
    if (num == 0) return false;
    while (num) {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
            return false;
        num /= 10;
    }
    return true;
}

int main() {
    int n, count = 0, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (isLucky(x))
            count++;
    }
    cout << count << endl;
    return 0;
}
