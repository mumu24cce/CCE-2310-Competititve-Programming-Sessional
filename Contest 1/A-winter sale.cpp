#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double X, P;
    cin >> X >> P;
    double original = P * 100 / (100 - X);
    cout << fixed << setprecision(2) << original << endl;
    return 0;
}
