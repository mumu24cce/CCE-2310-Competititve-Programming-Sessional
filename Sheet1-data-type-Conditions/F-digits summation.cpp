#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N, M;  // Use long long to handle large inputs
    cin >> N >> M;

    // Get the last digits of N and M
    int last_digit_N = N % 10;
    int last_digit_M = M % 10;

    // Output the sum of the last digits
    cout << last_digit_N + last_digit_M << endl;

    return 0;
}
