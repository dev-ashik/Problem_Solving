#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double A, B, R, n = 3.14159;
    cin >> R;
    A = n * pow(R, 2);

    cout.precision(4);
    cout  << fixed << "A=" << A << "\n";

    return 0;
}
