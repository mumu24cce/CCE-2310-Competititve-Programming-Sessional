#include<bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    cout << "floor " << A << " / " << B << " = " << floor((double)A / B) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil((double)A / B) << endl;
    cout << "round " << A << " / " << B << " = " << round((double)A / B) << endl;

    return 0;
}
